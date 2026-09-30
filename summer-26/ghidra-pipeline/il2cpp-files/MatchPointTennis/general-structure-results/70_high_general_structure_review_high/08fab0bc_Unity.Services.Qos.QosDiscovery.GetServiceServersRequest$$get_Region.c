/*
FUNCTION_NAME: Unity.Services.Qos.QosDiscovery.GetServiceServersRequest$$get_Region
ENTRY_POINT: 08fab0bc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Qos_QosDiscovery_GetServiceServersRequest__get_Region(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  undefined4 *unaff_x19;
  long *plVar5;
  undefined8 uVar6;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  in_stack_00000018 = FUN_068a4fb0(*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_09fbd188);
  uVar3 = FUN_067804ac(&stack0x00000018,*(undefined8 *)PTR_DAT_09fbd180);
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 10) = in_stack_00000018;
    thunk_FUN_044bb4b4(unaff_x19 + 10,0);
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_04b5a584(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    FUN_067804f0(&stack0x00000018,*(undefined8 *)PTR_DAT_09fbd178);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*unaff_x21);
    }
    if (DAT_0a5331f8 == '\0') {
      FUN_04447ba8(PTR_DAT_09f6be68);
      DAT_0a5331f8 = '\x01';
    }
    lVar1 = *unaff_x21;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar1 = *unaff_x21;
    }
    plVar5 = (long *)**(undefined8 **)(lVar1 + 0xb8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar1 = *plVar5;
    uVar6 = *(undefined8 *)(unaff_x19 + 8);
    uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_09fbcf58) {
          puVar2 = (undefined8 *)(lVar1 + (long)(*piVar4 + 5) * 0x10 + 0x138);
          goto LAB_08faaedc;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09fbcf58,5);
LAB_08faaedc:
    lVar1 = (*(code *)*puVar2)(plVar5,uVar6,puVar2[1]);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_stack_00000008 = FUN_07ab3bc0(lVar1,0);
    uVar3 = FUN_0795ad28(&stack0x00000008,0);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000008;
      thunk_FUN_044bb4b4(unaff_x19 + 0xc,0);
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      Unity_Collections_CollectionHelper__CreateNativeArray<GPUInstanceIndex>
                (unaff_x19 + 2,&stack0x00000008);
    }
    else {
      FUN_0795adf4(&stack0x00000008,0);
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_0795995c(unaff_x19 + 2,0);
    }
  }
  return;
}


