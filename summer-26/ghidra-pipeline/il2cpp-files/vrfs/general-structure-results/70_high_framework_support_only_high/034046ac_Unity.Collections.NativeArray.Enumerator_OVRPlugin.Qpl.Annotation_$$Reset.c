/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Qpl.Annotation>$$Reset
ENTRY_POINT: 034046ac
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03404944) */

void Unity_Collections_NativeArray_Enumerator<OVRPlugin_Qpl_Annotation>__Reset
               (long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int in_w9;
  long *unaff_x19;
  long unaff_x20;
  long lVar9;
  int unaff_w21;
  char in_stack_00000008;
  
  *(undefined4 *)(unaff_x19 + 0x11) = param_2;
  unaff_x19[0x13] = param_1 + in_w9;
  uVar5 = FUN_047f8144();
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_047ff8a4();
    if (lVar6 == 0) goto LAB_03404940;
    *(int *)(lVar6 + 0x24) = *(int *)(lVar6 + 0x24) + 1;
    lVar6 = FUN_047ff8a4();
    if (lVar6 == 0) goto LAB_03404940;
    *(int *)(lVar6 + 0x28) = *(int *)(lVar6 + 0x28) + 1;
  }
  puVar2 = PTR_DAT_06d921b0;
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 == 0) {
LAB_0340493c:
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
  cVar4 = *(char *)(unaff_x20 + 0x20);
  if (cVar4 == -0x10) {
    lVar6 = FUN_047ff8a4();
    if (lVar6 == 0) {
LAB_03404940:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    *(int *)(lVar6 + 0x38) = *(int *)(lVar6 + 0x38) + unaff_w21;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
    FUN_034049ac();
  }
  else if (cVar4 == -0xd) {
    if ((uVar1 < 2) || (uVar1 == 2)) goto LAB_0340493c;
    if ((*(byte *)(unaff_x20 + 0x21) & 0x7f) == 7) {
      cVar4 = *(char *)(unaff_x20 + 0x22);
      lVar6 = *(long *)PTR_DAT_06d921b0;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar6 = *(long *)puVar2;
      }
      if (cVar4 == *(char *)(*(long *)(lVar6 + 0xb8) + 4)) {
        lVar6 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06da3b08);
        if (lVar6 != 0) {
          FUN_033ff510();
          (**(code **)(*unaff_x19 + 0x278))();
          return;
        }
        goto LAB_03404940;
      }
    }
    if (*(int *)(*(long *)PTR_DAT_06e1b940 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    lVar6 = FUN_047fdc9c(0);
    if (lVar6 == 0) goto LAB_03404940;
    FUN_033f6e4c();
    *(undefined4 *)(lVar6 + 0x10) = 0;
    if (*(int *)(lVar6 + 0x14) < 0) {
      *(undefined4 *)(lVar6 + 0x14) = 0;
      FUN_033ff6b8(lVar6,0);
    }
    lVar9 = unaff_x19[0x24];
    in_stack_00000008 = '\0';
    FUN_03714a74(lVar9,&stack0x00000008,0);
    if (unaff_x19[0x24] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_04077b60(unaff_x19[0x24],lVar6,*(undefined8 *)PTR_DAT_06de2b88);
    if (in_stack_00000008 != '\0') {
      thunk_FUN_0160f328(lVar9,0);
    }
  }
  else {
    cVar4 = FUN_047f931c();
    puVar3 = PTR_DAT_06e46dc8;
    puVar2 = PTR_DAT_06da5420;
    if ((cVar4 != '\0') && (0 < unaff_w21)) {
      if (*(int *)(unaff_x20 + 0x18) == 0) goto LAB_0340493c;
      uVar7 = FUN_028fe778((char *)(unaff_x20 + 0x20),0);
      uVar8 = FUN_032194f0(&stack0x0000000c,0);
      FUN_02526f2c(*(undefined8 *)puVar3,uVar7,*(undefined8 *)puVar2,uVar8,0);
      FUN_047f9338();
    }
  }
  return;
}


