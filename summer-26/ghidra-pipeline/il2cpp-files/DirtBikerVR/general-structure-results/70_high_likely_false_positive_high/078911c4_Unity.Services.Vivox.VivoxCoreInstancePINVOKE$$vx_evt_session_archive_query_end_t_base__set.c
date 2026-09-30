/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_query_end_t_base__set
ENTRY_POINT: 078911c4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_base__set
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x21;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000018;
  
  plVar3 = (long *)(**(code **)(param_1 + 0x138))();
  uVar10 = *(undefined8 *)(unaff_x19 + 10);
  lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<Bounds>_TypeInfo);
  FUN_0679343c(lVar4,0);
  *(undefined8 *)(lVar4 + 0x10) = uVar10;
  thunk_FUN_03afed3c((undefined8 *)(lVar4 + 0x10),uVar10);
  uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_List<bool>_TypeInfo);
  FUN_078917f4(uVar10,lVar4);
  plVar9 = *(long **)(unaff_x21 + 0x10);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar4 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x25) {
        puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_0789127c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_03ac43c4(plVar9,*unaff_x25,2);
LAB_0789127c:
  uVar6 = (*(code *)*puVar5)(plVar9,puVar5[1]);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar4 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)System_Collections_Generic_List<BaseUnits[]>_TypeInfo)
      {
        puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_078912e8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_03ac43c4(plVar3,*(long *)System_Collections_Generic_List<BaseUnits[]>_TypeInfo,2);
LAB_078912e8:
  lVar4 = (*(code *)*puVar5)(plVar3,uVar10,uVar6,puVar5[1]);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000018 =
       FUN_058b71ec(lVar4,*(undefined8 *)System_Collections_Generic_List<Button>_TypeInfo);
  uVar7 = FUN_0587c6c4(&stack0x00000018,
                       *(undefined8 *)System_Collections_Generic_List<BsonToken>_TypeInfo);
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff8d20(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    lVar4 = FUN_0587c704(&stack0x00000018,
                         *(undefined8 *)System_Collections_Generic_List<BsonProperty>_TypeInfo);
    puVar2 = System_Collections_Generic_List<Bone>_TypeInfo;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(lVar4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0x20) + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar10 = *(undefined8 *)(lVar4 + 0x10);
    iVar1 = *(int *)(*unaff_x24 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar10,*(undefined8 *)puVar2);
  }
  return;
}


