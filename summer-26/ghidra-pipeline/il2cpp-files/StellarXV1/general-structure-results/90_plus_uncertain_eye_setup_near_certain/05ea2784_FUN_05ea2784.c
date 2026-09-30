/*
FUNCTION_NAME: FUN_05ea2784
ENTRY_POINT: 05ea2784
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_05ea2784(long *param_1,long param_2,long param_3,undefined4 param_4,uint param_5,
                 long param_6)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  
  if ((DAT_0988ba1d & 1) == 0) {
    FUN_04077588(PTR_DAT_09285890);
    FUN_04077588(PTR_DAT_092b6dd0);
    FUN_04077588(PTR_DAT_092ba5c0);
    FUN_04077588(PTR_DAT_092a4f40);
    FUN_04077588(PTR_DAT_092ba5c8);
    FUN_04077588(PTR_DAT_092ba5d0);
    FUN_04077588(PTR_DAT_092a4e98);
    FUN_04077588(PTR_DAT_09285b38);
    FUN_04077588(PTR_DAT_092ba5d8);
    FUN_04077588(PTR_DAT_092ba5e0);
    FUN_04077588(PTR_DAT_092ba5e8);
    DAT_0988ba1d = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_040dedf8(PTR_DAT_0929cbf8);
    uVar4 = thunk_FUN_040b4efc();
    uVar9 = thunk_FUN_040dedf8(PTR_DAT_092ba5f0);
    FUN_075ce0d0(uVar4,uVar9,0);
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar4,param_6);
  }
  if ((*(ushort *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__get_Item(param_1,param_4);
  if ((param_5 >> 1 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_092b6dd0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar3 = FUN_076deaf0(0);
    param_1[2] = lVar3;
    thunk_FUN_040ec700();
  }
  if ((param_5 & 1) == 0) goto LAB_05ea297c;
  lVar3 = FUN_076e814c(0);
  if (lVar3 == 0) {
LAB_05ea2904:
    puVar2 = PTR_DAT_092a4e98;
    if (*(int *)(*(long *)PTR_DAT_092a4e98 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar3 = FUN_076f4de8(0);
    if (DAT_0988a8d9 == '\0') {
      FUN_04077588(PTR_DAT_092a4e98);
      DAT_0988a8d9 = '\x01';
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar6 = *(long *)puVar2;
    }
    if (lVar3 == **(long **)(lVar6 + 0xb8)) goto LAB_05ea297c;
  }
  else {
    uVar4 = thunk_FUN_0408781c(lVar3,0);
    uVar9 = *(undefined8 *)PTR_DAT_092ba5c8;
    if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(PTR_DAT_09285980 + 0xe0));
    }
    uVar9 = FUN_0768890c(uVar9,0);
    uVar5 = FUN_07692be0(uVar4,uVar9,0);
    if ((uVar5 & 1) == 0) goto LAB_05ea2904;
  }
  param_1[3] = lVar3;
  thunk_FUN_040ec700(param_1 + 3,lVar3);
LAB_05ea297c:
  lVar3 = *param_1;
  if (lVar3 == 0) {
    param_1[1] = param_3;
    thunk_FUN_040ec700(param_1 + 1,param_3);
    lVar3 = FUN_040b1498(param_1,param_2,0);
    if (lVar3 == 0) {
      return;
    }
  }
  puVar2 = PTR_DAT_092ba5c0;
  lVar6 = *(long *)PTR_DAT_092ba5c0;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar6 = *(long *)puVar2;
  }
  if (lVar3 != **(long **)(lVar6 + 0xb8)) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_07700efc(0);
  }
  puVar2 = PTR_DAT_09285b38;
  plVar8 = (long *)param_1[3];
  if (plVar8 == (long *)0x0) {
    if (param_1[2] == 0) {
      FUN_05212758(param_2,param_3,1,*(undefined8 *)PTR_DAT_092ba5e0);
      return;
    }
    FUN_05212438(param_2,param_3,1,*(undefined8 *)PTR_DAT_092ba5d8);
    return;
  }
  lVar3 = *plVar8;
  bVar1 = *(byte *)(*(long *)PTR_DAT_092ba5d0 + 0x130);
  if ((bVar1 <= *(byte *)(lVar3 + 0x130)) &&
     (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_092ba5d0)) {
    lVar3 = *(long *)(param_6 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar3 = *(long *)(param_6 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_6 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      lVar3 = *(long *)(param_6 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      uVar4 = **(undefined8 **)(lVar3 + 0xb8);
      lVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092a4f40);
      lVar6 = *(long *)(param_6 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_040b1acc(lVar6);
      }
      FUN_076ddf8c(lVar3,uVar4,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38),0);
      lVar6 = *(long *)(param_6 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_040b1acc();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x30);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_040b1acc();
      }
      lVar7 = *(long *)(param_6 + 0x20);
      *(long *)(*(long *)(lVar6 + 0xb8) + 8) = lVar3;
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_040b1acc();
      }
      lVar6 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x30);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_040b1acc();
      }
      thunk_FUN_040ec700(*(long *)(lVar6 + 0xb8) + 8,lVar3);
    }
    uVar4 = FUN_05217a68(param_2,param_3,*(undefined8 *)PTR_DAT_092ba5e8);
                    /* WARNING: Could not recover jumptable at 0x05ea2c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x188))(plVar8,lVar3,uVar4,*(undefined8 *)(*plVar8 + 400));
    return;
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_092a4e98 + 0x130);
  if ((bVar1 <= *(byte *)(lVar3 + 0x130)) &&
     (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_092a4e98)) {
    if (*(int *)(*(long *)PTR_DAT_09285b38 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (DAT_0988a8d8 == '\0') {
      FUN_04077588(PTR_DAT_09285b38);
      DAT_0988a8d8 = '\x01';
    }
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
    if (*(int *)(*(long *)PTR_DAT_09285890 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_09285890);
    }
    uVar4 = FUN_076de68c(0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_076fff44(lVar3,param_2,param_3,uVar4,8,plVar8,0);
    return;
  }
  return;
}


