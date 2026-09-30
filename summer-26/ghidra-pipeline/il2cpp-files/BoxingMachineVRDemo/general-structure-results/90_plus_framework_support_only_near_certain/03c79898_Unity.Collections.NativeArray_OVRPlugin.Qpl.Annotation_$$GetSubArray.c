/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$GetSubArray
ENTRY_POINT: 03c79898
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetSubArray(void)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  long *plVar7;
  long unaff_x21;
  
  FUN_02d6084c(PTR_DAT_06764930);
  FUN_02d6084c(PTR_DAT_06769c50);
  FUN_02d6084c(PTR_DAT_06769c58);
  FUN_02d6084c(PTR_DAT_06769c60);
  *(undefined1 *)(unaff_x20 + 0xc53) = 1;
  puVar3 = PTR_DAT_06764930;
  plVar7 = (long *)unaff_x19[3];
  if (plVar7 == (long *)0x0) {
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    if (*(char *)((long)unaff_x19 + 0x4a) != '\0') {
      if (unaff_x19[2] != 0) {
        FUN_0357cd2c(*unaff_x19,unaff_x19[1],1,*(undefined8 *)PTR_DAT_06769c50);
        return;
      }
      FUN_0357d02c(*unaff_x19,unaff_x19[1],1,*(undefined8 *)PTR_DAT_06769c58);
      return;
    }
    lVar5 = *unaff_x19;
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03c799b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x18))
                (*(undefined8 *)(lVar5 + 0x40),unaff_x19[1],*(undefined8 *)(lVar5 + 0x28));
      return;
    }
  }
  else {
    lVar5 = *plVar7;
    bVar2 = *(byte *)(*(long *)PTR_DAT_06769c48 + 0x130);
    if ((bVar2 <= *(byte *)(lVar5 + 0x130)) &&
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_06769c48)) {
      lVar5 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02d9a2e0();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x30);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02d9a2e0();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar5 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02d9a2e0();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x30);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02d9a2e0();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
      if (lVar5 == 0) {
        lVar5 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02d9a2e0();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x30);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02d9a2e0();
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar5 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02d9a2e0();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x30);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02d9a2e0();
        }
        uVar4 = **(undefined8 **)(lVar5 + 0xb8);
        lVar5 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06767228);
        lVar6 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02d9a2e0(lVar6);
        }
        FUN_05069454(lVar5,uVar4,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x78),0);
        lVar6 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02d9a2e0();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x30);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02d9a2e0();
        }
        *(long *)(*(long *)(lVar6 + 0xb8) + 0x18) = lVar5;
        lVar6 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02d9a2e0();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x30);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02d9a2e0();
        }
        thunk_FUN_02dd37b4(*(long *)(lVar6 + 0xb8) + 0x18,lVar5);
      }
      uVar4 = FUN_035829e8(*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_06769c60);
                    /* WARNING: Could not recover jumptable at 0x03c79b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x188))(plVar7,lVar5,uVar4,*(undefined8 *)(*plVar7 + 400));
      return;
    }
    bVar2 = *(byte *)(*(long *)PTR_DAT_06767888 + 0x130);
    if ((*(byte *)(lVar5 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06767888)) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_06764930 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (DAT_06b7350e == '\0') {
      FUN_02d6084c(PTR_DAT_06764930);
      DAT_06b7350e = '\x01';
    }
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar3;
    }
    lVar6 = *unaff_x19;
    lVar1 = unaff_x19[1];
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
    if (*(int *)(*(long *)PTR_DAT_06767a30 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_05069828(0);
    if (lVar5 != 0) {
      FUN_05086820(lVar5,lVar6,lVar1,uVar4,8,plVar7,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


