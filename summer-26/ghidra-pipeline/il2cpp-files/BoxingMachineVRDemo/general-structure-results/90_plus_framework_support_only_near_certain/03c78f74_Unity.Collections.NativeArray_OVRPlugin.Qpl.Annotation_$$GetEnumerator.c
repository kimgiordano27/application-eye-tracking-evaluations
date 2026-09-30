/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$GetEnumerator
ENTRY_POINT: 03c78f74
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator(void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *plVar7;
  long *unaff_x23;
  long unaff_x25;
  undefined8 uVar8;
  
  FUN_02d6084c(PTR_DAT_06767228);
  FUN_02d6084c(PTR_DAT_06769c40);
  FUN_02d6084c(PTR_DAT_06769c48);
  FUN_02d6084c(PTR_DAT_06767888);
  FUN_02d6084c(PTR_DAT_06764930);
  FUN_02d6084c(PTR_DAT_06769c50);
  FUN_02d6084c(PTR_DAT_06769c58);
  FUN_02d6084c(PTR_DAT_06769c60);
  *(undefined1 *)(unaff_x25 + 0xc50) = 1;
  if (unaff_x20 == 0) {
    thunk_FUN_02dc61f4(PTR_DAT_06764070);
    uVar4 = thunk_FUN_02d9d534();
    uVar8 = thunk_FUN_02dc61f4(PTR_DAT_06769c68);
    FUN_04f77010(uVar4,uVar8,0);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar4);
  }
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  FUN_03c794ec();
  if ((unaff_w22 >> 1 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_06767520 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar3 = FUN_05069cc4(0);
    unaff_x23[2] = lVar3;
    thunk_FUN_02dd37b4();
  }
  if ((unaff_w22 & 1) == 0) goto LAB_03c79110;
  lVar3 = FUN_05069c88(0);
  if (lVar3 == 0) {
LAB_03c79098:
    puVar2 = PTR_DAT_06767888;
    if (*(int *)(*(long *)PTR_DAT_06767888 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar3 = FUN_0507dd80(0);
    if (DAT_06b743ad == '\0') {
      FUN_02d6084c(PTR_DAT_06767888);
      DAT_06b743ad = '\x01';
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar2;
    }
    if (lVar3 == **(long **)(lVar6 + 0xb8)) goto LAB_03c79110;
  }
  else {
    uVar4 = thunk_FUN_02d709fc(lVar3,0);
    uVar8 = *(undefined8 *)PTR_DAT_06769c40;
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)(PTR_DAT_0675e258 + 0xe0));
    }
    uVar8 = FUN_05015c2c(uVar8,0);
    uVar5 = FUN_0501fa14(uVar4,uVar8,0);
    if ((uVar5 & 1) == 0) goto LAB_03c79098;
  }
  unaff_x23[3] = lVar3;
  thunk_FUN_02dd37b4(unaff_x23 + 3,lVar3);
LAB_03c79110:
  lVar3 = *unaff_x23;
  if (lVar3 == 0) {
    unaff_x23[1] = unaff_x19;
    thunk_FUN_02dd37b4();
    lVar3 = FUN_02d99e8c();
    if (lVar3 == 0) {
      return;
    }
  }
  puVar2 = PTR_DAT_06769c38;
  lVar6 = *(long *)PTR_DAT_06769c38;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar2;
  }
  if (lVar3 != **(long **)(lVar6 + 0xb8)) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0508773c(0);
  }
  puVar2 = PTR_DAT_06764930;
  plVar7 = (long *)unaff_x23[3];
  if (plVar7 == (long *)0x0) {
    if (unaff_x23[2] == 0) {
      FUN_0357d02c();
      return;
    }
    FUN_0357cd2c();
    return;
  }
  lVar3 = *plVar7;
  bVar1 = *(byte *)(*(long *)PTR_DAT_06769c48 + 0x130);
  if ((bVar1 <= *(byte *)(lVar3 + 0x130)) &&
     (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06769c48)) {
    lVar3 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar3 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar3 == 0) {
      lVar3 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar3 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      uVar4 = **(undefined8 **)(lVar3 + 0xb8);
      lVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06767228);
      lVar6 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02d9a2e0(lVar6);
      }
      FUN_05069454(lVar3,uVar4,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38),0);
      lVar6 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02d9a2e0();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x30);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02d9a2e0();
      }
      *(long *)(*(long *)(lVar6 + 0xb8) + 8) = lVar3;
      lVar6 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02d9a2e0();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x30);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02d9a2e0();
      }
      thunk_FUN_02dd37b4(*(long *)(lVar6 + 0xb8) + 8,lVar3);
    }
    uVar4 = FUN_035829e8();
                    /* WARNING: Could not recover jumptable at 0x03c793fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x188))(plVar7,lVar3,uVar4,*(undefined8 *)(*plVar7 + 400));
    return;
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_06767888 + 0x130);
  if ((bVar1 <= *(byte *)(lVar3 + 0x130)) &&
     (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06767888)) {
    if (*(int *)(*(long *)PTR_DAT_06764930 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (DAT_06b7350e == '\0') {
      FUN_02d6084c(PTR_DAT_06764930);
      DAT_06b7350e = '\x01';
    }
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
    if (*(int *)(*(long *)PTR_DAT_06767a30 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06767a30);
    }
    FUN_05069828(0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_05086820(lVar3);
    return;
  }
  return;
}


