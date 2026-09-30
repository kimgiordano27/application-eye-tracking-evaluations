/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_req_sessiongroup_add_session_t
ENTRY_POINT: 078aee70
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_sessiongroup_add_session_t(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  
  FUN_0666e9a8(&stack0x00000028,0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plVar7 = *(long **)(unaff_x20 + 0x70);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar4 = *plVar7;
  uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x48) + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)System_Collections_Generic_List<PanelRaycaster>_TypeInfo) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
        goto LAB_078aef38;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_03ac43c4(plVar7,*(long *)System_Collections_Generic_List<PanelRaycaster>_TypeInfo,6);
LAB_078aef38:
  lVar4 = (*(code *)*puVar3)(plVar7,uVar8,uVar9,puVar3[1]);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000018 =
       FUN_058b71ec(lVar4,*(undefined8 *)System_Collections_Generic_List<ParticleSystem>_TypeInfo);
  uVar5 = FUN_0587c6c4(&stack0x00000018,
                       *(undefined8 *)System_Collections_Generic_List<ParameterExpression>_TypeInfo)
  ;
  if ((uVar5 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    System_Array__InternalArray__ICollection_CopyTo<Dictionary_Entry<object,_PropertyDescriptor>>
              (unaff_x19 + 2,&stack0x00000018);
  }
  else {
    uVar8 = FUN_0587c704(&stack0x00000018,
                         *(undefined8 *)System_Collections_Generic_List<PanelSettings>_TypeInfo);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_078ad680();
    lVar4 = *(long *)(unaff_x20 + 0x28);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),uVar8,*(undefined8 *)(lVar4 + 0x28))
      ;
    }
    puVar2 = System_Collections_Generic_List<object>_TypeInfo;
    iVar1 = *(int *)(*unaff_x24 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar8,*(undefined8 *)puVar2);
  }
  return;
}


