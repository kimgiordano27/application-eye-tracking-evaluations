/*
FUNCTION_NAME: FUN_087f9070
ENTRY_POINT: 087f9070
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


void FUN_087f9070(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  if ((DAT_098a8778 & 1) == 0) {
    FUN_04077588(PTR_DAT_09285d70);
    FUN_04077588(PTR_DAT_09337ed0);
    FUN_04077588(PTR_DAT_09337590);
    FUN_04077588(PTR_DAT_09337ed8);
    FUN_04077588(PTR_DAT_09337e58);
    FUN_04077588(PTR_DAT_093375a8);
    FUN_04077588(PTR_DAT_092858e8);
    FUN_04077588(PTR_DAT_09298da0);
    FUN_04077588(PTR_DAT_09337ee0);
    FUN_04077588(PTR_DAT_09337af0);
    FUN_04077588(PTR_DAT_09337ee8);
    FUN_04077588(PTR_DAT_09337ef0);
    FUN_04077588(PTR_DAT_09337ef8);
    FUN_04077588(PTR_DAT_09337f00);
    FUN_04077588(PTR_DAT_09337f08);
    DAT_098a8778 = 1;
  }
  puVar1 = PTR_DAT_09337ed0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_b4 = 0;
  FUN_087faa44(param_1);
  FUN_087faa9c(param_1);
  fVar8 = (float)UnityEngine_UIElements_BaseVisualTreeUpdater__UnityEngine_UIElements_IVisualTreeUpdater_get_FrameCount
                           (param_1 + 0x28,0);
  if (fVar8 == 0.0) {
    if (*(long *)(param_1 + 0x138) == 0) goto LAB_087f9788;
    uVar5 = System_Array_EmptyInternalEnumerator<MeshGenerator_TessellationJobParameters>__Dispose
                      (*(long *)(param_1 + 0x138),0x58,*(undefined8 *)puVar1);
    if ((uVar5 & 1) != 0) {
      if ((((*(long *)(param_1 + 0x138) == 0) ||
           (lVar6 = System_Array_EmptyInternalEnumerator<MeshGenerator_BackgroundRepeatInstance>__MoveNext
                              (*(long *)(param_1 + 0x138),0x58,*(undefined8 *)PTR_DAT_09337590),
           lVar6 == 0)) || (*(long *)(param_1 + 0x128) == 0)) ||
         (lVar6 = System_Array_EmptyInternalEnumerator<MeshGenerator_BackgroundRepeatInstance>__MoveNext
                            (*(long *)(param_1 + 0x128),*(undefined4 *)(lVar6 + 0x28),
                             *(undefined8 *)PTR_DAT_09337ed8), lVar6 == 0)) goto LAB_087f9788;
      FUN_08a74008(&local_118,lVar6,0);
      uStack_48 = uStack_110;
      local_50 = local_118;
      local_40 = local_108;
      FUN_08a73e48(&local_50,0);
      UnityEngine_UIElements_BaseVisualTreeUpdater__UnityEngine_UIElements_IVisualTreeUpdater_set_FrameCount
                (param_1 + 0x28,0);
    }
  }
  fVar8 = (float)UnityEngine_UIElements_BaseVisualTreeUpdater__add_panelChanged(param_1 + 0x28,0);
  if (fVar8 == 0.0) {
    if (*(long *)(param_1 + 0x138) == 0) goto LAB_087f9788;
    uVar5 = System_Array_EmptyInternalEnumerator<MeshGenerator_TessellationJobParameters>__Dispose
                      (*(long *)(param_1 + 0x138),0x78,*(undefined8 *)puVar1);
    if ((uVar5 & 1) != 0) {
      if (((*(long *)(param_1 + 0x138) == 0) ||
          (lVar6 = System_Array_EmptyInternalEnumerator<MeshGenerator_BackgroundRepeatInstance>__MoveNext
                             (*(long *)(param_1 + 0x138),0x78,*(undefined8 *)PTR_DAT_09337590),
          lVar6 == 0)) ||
         ((*(long *)(param_1 + 0x128) == 0 ||
          (lVar6 = System_Array_EmptyInternalEnumerator<MeshGenerator_BackgroundRepeatInstance>__MoveNext
                             (*(long *)(param_1 + 0x128),*(undefined4 *)(lVar6 + 0x28),
                              *(undefined8 *)PTR_DAT_09337ed8), lVar6 == 0)))) goto LAB_087f9788;
      FUN_08a74008(&local_118,lVar6,0);
      uStack_48 = uStack_110;
      local_50 = local_118;
      local_40 = local_108;
      FUN_08a73e48(&local_50,0);
      FUN_08a73b94(param_1 + 0x28,0);
    }
  }
  fVar8 = (float)FUN_08a73b4c(param_1 + 0x28,0);
  if (fVar8 == 0.0) {
    FUN_08a73b54(0x3f800000,param_1 + 0x28,0);
  }
  fVar8 = (float)FUN_08a73bdc(param_1 + 0x28,0);
  if (fVar8 == 0.0) {
    fVar8 = (float)UnityEngine_UIElements_BaseVisualTreeUpdater__UnityEngine_UIElements_IVisualTreeUpdater_get_FrameCount
                             (param_1 + 0x28,0);
    FUN_08a73be4(fVar8 / 2.5,param_1 + 0x28,0);
  }
  puVar1 = PTR_DAT_093375a8;
  if (*(int *)(param_1 + 0x160) == 0) {
    lVar6 = *(long *)(param_1 + 0x88);
    if (*(int *)(*(long *)PTR_DAT_093375a8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (lVar6 == 0) goto LAB_087f9788;
    uVar5 = FUN_08995264(lVar6,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x6c),0);
    if ((uVar5 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x88);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (lVar6 == 0) goto LAB_087f9788;
      fVar8 = (float)thunk_FUN_08997afc(lVar6,*(undefined4 *)
                                               (*(long *)(*(long *)puVar1 + 0xb8) + 0x6c),0);
      iVar3 = 0x7fffffff;
      if (fVar8 != INFINITY) {
        iVar3 = (int)fVar8 + -1;
      }
      *(int *)(param_1 + 0x160) = iVar3;
    }
  }
  iVar3 = FUN_08a73b5c(param_1 + 0x28,0);
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x110) == 0)) {
LAB_087f93cc:
    puVar2 = PTR_DAT_09337af0;
    puVar1 = PTR_DAT_09298da0;
    uVar7 = thunk_FUN_089d03e8(param_1,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)puVar2);
    }
    puVar2 = PTR_DAT_09337ee0;
    uVar4 = FUN_0884b754(uVar7,0);
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    uVar7 = FUN_08a73b34(param_1 + 0x28,0);
    uVar4 = FUN_0884b754(uVar7,0);
    *(undefined4 *)(param_1 + 0x118) = uVar4;
    uVar7 = FUN_08a73b3c(param_1 + 0x28,0);
    uVar4 = FUN_0884b754(uVar7,0);
    *(undefined4 *)(param_1 + 0x11c) = uVar4;
    uVar7 = thunk_FUN_089d03e8(param_1,0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8(lVar6);
      lVar6 = *(long *)puVar1;
    }
    uVar7 = FUN_074d875c(uVar7,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x58),0);
    uVar4 = FUN_0884b820(uVar7,0);
    lVar6 = *(long *)puVar2;
    *(undefined4 *)(param_1 + 0x90) = uVar4;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0883bd20(param_1,0);
    *(undefined1 *)(param_1 + 0x1b2) = 0;
    FUN_087fa610(param_1,param_1);
    return;
  }
  uVar5 = FUN_0896b6e8(0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_09337e58 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_08a75048(&local_118,0);
    memcpy(&local_b0,&local_118,0x60);
    uVar4 = FUN_08a73b5c(&local_b0,0);
    FUN_08a73b64(param_1 + 0x28,uVar4,0);
    lVar6 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,5);
    if (lVar6 == 0) goto LAB_087f9788;
    if (*(int *)(lVar6 + 0x18) != 0) {
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_09337f00;
      thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x20));
      uVar7 = thunk_FUN_089d03e8(param_1,0);
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar6 + 0x28) = uVar7;
        thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x28),uVar7);
        if (2 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)PTR_DAT_09337ee8;
          thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x30));
          local_b4 = FUN_08a73b5c(param_1 + 0x28,0);
          uVar7 = FUN_07676bc4(&local_b4,0);
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar6 + 0x38) = uVar7;
            thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x38),uVar7);
            if (4 < *(uint *)(lVar6 + 0x18)) {
              *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)PTR_DAT_09337f08;
              thunk_FUN_040ec700();
              uVar7 = FUN_074e71ac(lVar6,0);
              if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
                thunk_FUN_040d65a8(*(long *)PTR_DAT_09285d70);
              }
              FUN_0897e2a8(uVar7,0);
              goto LAB_087f93cc;
            }
          }
        }
      }
    }
  }
  else {
    lVar6 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,5);
    if (lVar6 == 0) {
LAB_087f9788:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(int *)(lVar6 + 0x18) != 0) {
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_09337f00;
      thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x20));
      uVar7 = thunk_FUN_089d03e8(param_1,0);
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar6 + 0x28) = uVar7;
        thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x28),uVar7);
        if (2 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)PTR_DAT_09337ef0;
          thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x30));
          uVar7 = thunk_FUN_089d03e8(param_1,0);
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar6 + 0x38) = uVar7;
            thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x38),uVar7);
            if (4 < *(uint *)(lVar6 + 0x18)) {
              *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)PTR_DAT_09337ef8;
              thunk_FUN_040ec700();
              uVar7 = FUN_074e71ac(lVar6,0);
              if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
                thunk_FUN_040d65a8(*(long *)PTR_DAT_09285d70);
              }
              FUN_0897e8f4(uVar7,0);
              goto LAB_087f93cc;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


