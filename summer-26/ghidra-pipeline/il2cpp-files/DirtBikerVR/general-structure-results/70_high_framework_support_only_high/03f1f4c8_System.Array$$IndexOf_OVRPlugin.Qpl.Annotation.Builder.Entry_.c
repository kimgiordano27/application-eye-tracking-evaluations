/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 03f1f4c8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__IndexOf<OVRPlugin_Qpl_Annotation_Builder_Entry>
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               long param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long in_x9;
  long lVar5;
  long lVar6;
  long in_x10;
  uint in_w11;
  int unaff_w19;
  int *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  int iVar7;
  uint unaff_w25;
  long unaff_x26;
  long *unaff_x27;
  int unaff_w28;
  undefined4 uVar8;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000038;
  
  if ((uint)in_x10 < in_w11) {
    *(uint *)(param_5 + 0x18) = (uint)in_x10 + 1;
    *(undefined4 *)(param_1 + in_x10 * 4 + 0x20) = 0;
  }
  else {
    FUN_04d8c18c(param_5,0,*(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70));
    param_5 = *unaff_x23;
    if (param_5 == 0) goto LAB_03f1f964;
  }
  lVar4 = *(long *)(param_5 + 0x10);
  lVar5 = *unaff_x27;
  *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) + 1;
  if (lVar4 != 0) {
    uVar1 = *(uint *)(param_5 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(param_5 + 0x18) = uVar1 + 1;
      *(int *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = unaff_w28;
    }
    else {
      FUN_04d8c18c(param_5,unaff_w28,
                   *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      param_5 = *unaff_x23;
      if (param_5 == 0) goto LAB_03f1f964;
    }
    lVar4 = *(long *)(param_5 + 0x10);
    lVar5 = *unaff_x27;
    *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(param_5 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(param_5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 4;
      }
      else {
        FUN_04d8c18c(param_5,4,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      if (unaff_w19 != 2) {
        iVar7 = 2;
        do {
          if (*(uint *)(unaff_x26 + 0x18) <= unaff_w25) {
System_Array__IndexOfImpl<KeyValuePair<Int32Enum,_object>>:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          if (*in_stack_00000028 == 0) goto LAB_03f1f964;
          uVar8 = FUN_04ed6994(*in_stack_00000028,iVar7 + *unaff_x20,*(undefined8 *)PTR_DAT_0848ba70
                              );
          lVar4 = *(long *)(unaff_x22 + 0x10);
          *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
          if (lVar4 == 0) goto LAB_03f1f964;
          uVar1 = *(uint *)(unaff_x22 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            lVar4 = lVar4 + (long)(int)uVar1 * 0xc;
            *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar4 + 0x20) = uVar8;
            *(undefined4 *)(lVar4 + 0x24) = param_3;
            *(undefined4 *)(lVar4 + 0x28) = param_4;
          }
          else {
            FUN_04ed6cc4();
          }
          if (*(uint *)(unaff_x26 + 0x18) <= unaff_w25)
          goto System_Array__IndexOfImpl<KeyValuePair<Int32Enum,_object>>;
          if (in_stack_00000038 == 0) goto LAB_03f1f964;
          uVar8 = FUN_04ed18a4(in_stack_00000038,iVar7 + *unaff_x20,*(undefined8 *)PTR_DAT_0848d680)
          ;
          lVar4 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar4 == 0) goto LAB_03f1f964;
          uVar1 = *(uint *)(unaff_x21 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            lVar4 = lVar4 + (long)(int)uVar1 * 8;
            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar4 + 0x20) = uVar8;
            *(undefined4 *)(lVar4 + 0x24) = param_3;
          }
          else {
            FUN_04ed1ba4();
          }
          lVar4 = *unaff_x23;
          if (lVar4 == 0) goto LAB_03f1f964;
          lVar5 = *(long *)(lVar4 + 0x10);
          lVar6 = *unaff_x27;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar5 == 0) goto LAB_03f1f964;
          uVar1 = *(uint *)(lVar4 + 0x18);
          iVar2 = unaff_w28 + iVar7 + -2;
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(int *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = iVar2;
          }
          else {
            FUN_04d8c18c(lVar4,iVar2,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            lVar4 = *unaff_x23;
            if (lVar4 == 0) goto LAB_03f1f964;
          }
          lVar5 = *(long *)(lVar4 + 0x10);
          lVar6 = *unaff_x27;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar5 == 0) goto LAB_03f1f964;
          uVar1 = *(uint *)(lVar4 + 0x18);
          iVar2 = unaff_w28 + iVar7 + -1;
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(int *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = iVar2;
          }
          else {
            FUN_04d8c18c(lVar4,iVar2,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            lVar4 = *unaff_x23;
            if (lVar4 == 0) goto LAB_03f1f964;
          }
          lVar5 = *(long *)(lVar4 + 0x10);
          lVar6 = *unaff_x27;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar5 == 0) goto LAB_03f1f964;
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 4;
          }
          else {
            FUN_04d8c18c(lVar4,4,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          iVar7 = iVar7 + 1;
        } while (unaff_w19 != iVar7);
      }
      lVar4 = *unaff_x23;
      if (lVar4 != 0) {
        lVar5 = *(long *)(lVar4 + 0x10);
        lVar6 = *unaff_x27;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar5 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          iVar7 = unaff_w19 + unaff_w28 + -2;
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(int *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = iVar7;
          }
          else {
            FUN_04d8c18c(lVar4,iVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            lVar4 = *unaff_x23;
            if (lVar4 == 0) goto LAB_03f1f964;
          }
          lVar5 = *(long *)(lVar4 + 0x10);
          lVar6 = *unaff_x27;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar5 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 7;
            }
            else {
              FUN_04d8c18c(lVar4,7,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                          );
              lVar4 = *unaff_x23;
              if (lVar4 == 0) goto LAB_03f1f964;
            }
            lVar5 = *(long *)(lVar4 + 0x10);
            lVar6 = *unaff_x27;
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar5 != 0) {
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 4;
              }
              else {
                FUN_04d8c18c(lVar4,4,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
              uVar3 = FUN_04ed8888();
              *in_stack_00000020 = uVar3;
              thunk_FUN_03afed3c();
              if (unaff_x21 != 0) {
                uVar3 = FUN_04ed36a0();
                *in_stack_00000018 = uVar3;
                thunk_FUN_03afed3c();
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_03f1f964:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


