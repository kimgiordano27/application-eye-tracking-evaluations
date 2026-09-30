/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.Vector4f>
ENTRY_POINT: 04785390
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array__Empty<OVRPlugin_Vector4f>(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined2 *puVar7;
  long lVar8;
  long lVar9;
  undefined2 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  long lVar10;
  long unaff_x23;
  undefined8 unaff_d8;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  
  uVar3 = FUN_0675ff58();
  uVar4 = FUN_0675ff58(*unaff_x22,0);
  uVar5 = FUN_067690d8(uVar3,uVar4,0);
  puVar1 = PTR_DAT_084914e0;
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_084914e0 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar3 = FUN_0675ff58(uVar3,0);
    uVar4 = FUN_0675ff58(*unaff_x22,0);
    if (*(int *)(*(long *)PTR_DAT_084935c8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_084935c8);
    }
    uVar5 = FUN_07d3734c(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar3,uVar4,&stack0x00000010,0);
    lVar9 = in_stack_00000010;
    if ((uVar5 & 1) != 0) {
      lVar10 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03ac4090(lVar10);
      }
      if (lVar9 != 0) {
        lVar8 = thunk_FUN_03ac73c0(lVar9,lVar10);
        if (lVar8 != 0) {
          lVar10 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
          if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_03ac4090(lVar10);
          }
          lVar8 = thunk_FUN_03ac73c0(lVar9,lVar10);
          if (lVar8 != 0) {
            plVar6 = (long *)(**(code **)(lVar8 + 0x18))
                                       (*(undefined8 *)(lVar8 + 0x40),&stack0x00000018,
                                        *(undefined8 *)(lVar8 + 0x28));
            lVar9 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
            if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_03ac4090(lVar9);
            }
            if (plVar6 != (long *)0x0) {
              if (*(long *)(*plVar6 + 0x40) != *(long *)(lVar9 + 0x40)) goto LAB_04785638;
              puVar7 = (undefined2 *)thunk_FUN_03ac7604(plVar6);
              puVar1 = PTR_DAT_08486738;
              *unaff_x19 = *puVar7;
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar2 = FUN_07ca21f0(plVar6,0);
              goto LAB_04785608;
            }
            goto LAB_04785628;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(lVar9,lVar10);
      }
LAB_04785628:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar2 = 0;
    *unaff_x19 = 0;
  }
  else {
    in_stack_00000008 = unaff_d8;
    plVar6 = (long *)thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20),
                                        &stack0x00000008);
    lVar9 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03ac4090(lVar9);
    }
    if (plVar6 == (long *)0x0) goto LAB_04785628;
    if (*(long *)(*plVar6 + 0x40) != *(long *)(lVar9 + 0x40)) {
LAB_04785638:
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(plVar6);
    }
    puVar7 = (undefined2 *)thunk_FUN_03ac7604(plVar6);
    uVar2 = 1;
    *unaff_x19 = *puVar7;
  }
LAB_04785608:
  return uVar2 & 1;
}


