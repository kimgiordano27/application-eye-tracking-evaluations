/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$.ctor
ENTRY_POINT: 02152168
PROGRAM: vrlegs-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>___ctor(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int in_w9;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  int iStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  (**(code **)(param_1 + (long)(in_w9 + 3) * 0x10 + 0x138))();
  iVar13 = *(int *)((long)unaff_x19 + 0x54);
  iVar1 = *(int *)((long)unaff_x19 + 0x1c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (iVar13 + unaff_w20) / iVar1;
  }
  *(int *)(unaff_x19 + 5) = (iVar13 + unaff_w20) - iVar2 * iVar1;
  if (unaff_x21 == 0) {
    *(undefined1 *)((long)unaff_x19 + 0x49) = 1;
    if ((char)unaff_x19[0xe] != '\0') {
      plVar10 = (long *)unaff_x19[0xc];
      plVar4 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,6);
      if (plVar4 == (long *)0x0) goto LAB_02152f50;
      lVar11 = unaff_x19[0xd];
      if ((lVar11 != 0) &&
         (lVar5 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_02152f44;
      if ((int)plVar4[3] == 0) goto LAB_02152f40;
      plVar4[4] = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 4,lVar11);
      puVar3 = PTR_DAT_03cbeda8;
      uStack000000000000001c = (undefined4)unaff_x19[10];
      lVar11 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,(long)&stack0x00000018 + 4);
      if ((lVar11 != 0) &&
         (lVar5 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_02152f44;
      if (*(uint *)(plVar4 + 3) < 2) goto LAB_02152f40;
      plVar4[5] = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 5,lVar11);
      iStack0000000000000018 = iVar13;
      lVar11 = thunk_FUN_01a89a98(*(undefined8 *)puVar3,&stack0x00000018);
      if ((lVar11 != 0) &&
         (lVar5 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_02152f44;
      if (*(uint *)(plVar4 + 3) < 3) goto LAB_02152f40;
      plVar4[6] = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 6,lVar11);
      lVar11 = thunk_FUN_01a89a98(*(undefined8 *)puVar3,&stack0x0000000c);
      if ((lVar11 != 0) &&
         (lVar5 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_02152f44;
      if (*(uint *)(plVar4 + 3) < 4) goto LAB_02152f40;
      plVar4[7] = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 7,lVar11);
      in_stack_00000008 = (undefined4)unaff_x19[5];
      lVar11 = thunk_FUN_01a89a98(*(undefined8 *)puVar3,&stack0x00000008);
      if ((lVar11 != 0) &&
         (lVar5 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_02152f44;
      if (*(uint *)(plVar4 + 3) < 5) goto LAB_02152f40;
      plVar4[8] = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 8,lVar11);
      in_stack_00000000._4_4_ = *(int *)((long)unaff_x19 + 0x4c) + unaff_w20;
      lVar11 = thunk_FUN_01a89a98(*(undefined8 *)puVar3,(long)&stack0x00000000 + 4);
      if ((lVar11 != 0) &&
         (lVar5 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_02152f44;
      if (*(uint *)(plVar4 + 3) < 6) goto LAB_02152f40;
      plVar4[9] = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 9,lVar11);
      if (plVar10 == (long *)0x0) goto LAB_02152f50;
      lVar11 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      uVar12 = *(undefined8 *)PTR_DAT_03cdadd8;
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03ccf278) {
            puVar6 = (undefined8 *)(lVar11 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto UnityEngine_UIElements_PointerCaptureEventBase<object>__set_relatedTarget;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)PTR_DAT_03ccf278,3);
UnityEngine_UIElements_PointerCaptureEventBase<object>__set_relatedTarget:
      (*(code *)*puVar6)(plVar10,uVar12,plVar4,puVar6[1]);
    }
    if ((char)unaff_x19[0x15] == '\0') {
      return;
    }
    *(undefined1 *)(unaff_x19 + 0x15) = 0;
    if ((char)unaff_x19[0xe] == '\0') {
      return;
    }
    plVar10 = (long *)unaff_x19[0xc];
    plVar4 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,6);
    if (plVar4 != (long *)0x0) {
      lVar11 = unaff_x19[0xd];
      if ((lVar11 != 0) &&
         (lVar5 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_02152f44;
      if ((int)plVar4[3] != 0) {
        plVar4[4] = lVar11;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 4,lVar11);
        puVar3 = PTR_DAT_03cbeda8;
        uStack000000000000001c = (undefined4)unaff_x19[10];
        lVar11 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,(long)&stack0x00000018 + 4);
        if ((lVar11 != 0) &&
           (lVar5 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
        goto LAB_02152f44;
        if (1 < *(uint *)(plVar4 + 3)) {
          plVar4[5] = lVar11;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 5,lVar11);
          iStack0000000000000018 = iVar13;
          lVar11 = thunk_FUN_01a89a98(*(undefined8 *)puVar3,&stack0x00000018);
          if ((lVar11 != 0) &&
             (lVar5 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
          goto LAB_02152f44;
          if (2 < *(uint *)(plVar4 + 3)) {
            plVar4[6] = lVar11;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 6,lVar11);
            lVar11 = thunk_FUN_01a89a98(*(undefined8 *)puVar3,&stack0x0000000c);
            if ((lVar11 != 0) &&
               (lVar5 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
            goto LAB_02152f44;
            if (3 < *(uint *)(plVar4 + 3)) {
              plVar4[7] = lVar11;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 7,lVar11);
              in_stack_00000008 = (undefined4)unaff_x19[5];
              lVar11 = thunk_FUN_01a89a98(*(undefined8 *)puVar3,&stack0x00000008);
              if ((lVar11 != 0) &&
                 (lVar5 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
              goto LAB_02152f44;
              if (4 < *(uint *)(plVar4 + 3)) {
                plVar4[8] = lVar11;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 8,lVar11)
                ;
                in_stack_00000000._4_4_ = *(int *)((long)unaff_x19 + 0x4c) + unaff_w20;
                lVar11 = thunk_FUN_01a89a98(*(undefined8 *)puVar3,(long)&stack0x00000000 + 4);
                if ((lVar11 != 0) &&
                   (lVar5 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                goto LAB_02152f44;
                if (5 < *(uint *)(plVar4 + 3)) {
                  plVar4[9] = lVar11;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar4 + 9,lVar11);
                  if (plVar10 != (long *)0x0) {
                    lVar11 = *plVar10;
                    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    uVar12 = *(undefined8 *)PTR_DAT_03cdadc0;
                    if (uVar8 != 0) {
                      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03ccf278) {
                          puVar6 = (undefined8 *)(lVar11 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                          goto FUN_02152b74;
                        }
                        uVar8 = uVar8 - 1;
                        piVar9 = piVar9 + 4;
                      } while (uVar8 != 0);
                    }
                    puVar6 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)PTR_DAT_03ccf278,3);
FUN_02152b74:
                    (*(code *)*puVar6)(plVar10,uVar12,plVar4,puVar6[1]);
                    return;
                  }
                  goto LAB_02152f50;
                }
              }
            }
          }
        }
      }
      goto LAB_02152f40;
    }
    goto LAB_02152f50;
  }
  if (*(char *)((long)unaff_x19 + 0x49) != '\0') {
    iVar13 = *(int *)((long)unaff_x19 + 0x4c);
    iVar1 = *(int *)((long)unaff_x19 + 0x1c);
    *(undefined1 *)((long)unaff_x19 + 0x49) = 0;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = (iVar13 + unaff_w20) / iVar1;
    }
    *(int *)(unaff_x19 + 5) = (iVar13 + unaff_w20) - iVar2 * iVar1;
    if ((char)unaff_x19[0xe] != '\0') {
      plVar10 = (long *)unaff_x19[0xc];
      plVar4 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,6);
      if (plVar4 == (long *)0x0) goto LAB_02152f50;
      lVar11 = unaff_x19[0xd];
      if ((lVar11 != 0) &&
         (lVar5 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_02152f44;
      if ((int)plVar4[3] == 0) goto LAB_02152f40;
      plVar4[4] = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 4,lVar11);
      puVar3 = PTR_DAT_03cbeda8;
      uStack000000000000001c = (undefined4)unaff_x19[10];
      lVar11 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,(long)&stack0x00000018 + 4);
      if ((lVar11 != 0) &&
         (lVar5 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_02152f44;
      if (*(uint *)(plVar4 + 3) < 2) goto LAB_02152f40;
      plVar4[5] = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 5,lVar11);
      iStack0000000000000018 = iVar13;
      lVar11 = thunk_FUN_01a89a98(*(undefined8 *)puVar3,&stack0x00000018);
      if ((lVar11 != 0) &&
         (lVar5 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_02152f44;
      if (*(uint *)(plVar4 + 3) < 3) goto LAB_02152f40;
      plVar4[6] = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 6,lVar11);
      lVar11 = thunk_FUN_01a89a98(*(undefined8 *)puVar3,&stack0x0000000c);
      if ((lVar11 != 0) &&
         (lVar5 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_02152f44;
      if (*(uint *)(plVar4 + 3) < 4) goto LAB_02152f40;
      plVar4[7] = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 7,lVar11);
      in_stack_00000008 = (undefined4)unaff_x19[5];
      lVar11 = thunk_FUN_01a89a98(*(undefined8 *)puVar3,&stack0x00000008);
      if ((lVar11 != 0) &&
         (lVar5 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_02152f44;
      if (*(uint *)(plVar4 + 3) < 5) goto LAB_02152f40;
      plVar4[8] = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 8,lVar11);
      in_stack_00000000._4_4_ = *(int *)((long)unaff_x19 + 0x4c) + unaff_w20;
      lVar11 = thunk_FUN_01a89a98(*(undefined8 *)puVar3,(long)&stack0x00000000 + 4);
      if ((lVar11 != 0) &&
         (lVar5 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_02152f44;
      if (*(uint *)(plVar4 + 3) < 6) goto LAB_02152f40;
      plVar4[9] = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 9,lVar11);
      if (plVar10 == (long *)0x0) goto LAB_02152f50;
      lVar11 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      uVar12 = *(undefined8 *)PTR_DAT_03cdada8;
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03ccf278) {
            puVar6 = (undefined8 *)(lVar11 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto FUN_02152674;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)PTR_DAT_03ccf278,3);
FUN_02152674:
      (*(code *)*puVar6)(plVar10,uVar12,plVar4,puVar6[1]);
    }
  }
  if (((int)unaff_x19[10] < iVar13) && ((char)unaff_x19[0x15] == '\0')) {
    if ((char)unaff_x19[0x12] == '\0') {
      if (unaff_x19[0x11] == 0) goto LAB_02152f50;
      FUN_020a39c4(unaff_x19[0x11],*(undefined4 *)((long)unaff_x19 + 0x44),(int)unaff_x19[8],6,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x88));
    }
    *(undefined1 *)(unaff_x19 + 0x15) = 1;
    if ((char)unaff_x19[0xe] != '\0') {
      plVar10 = (long *)unaff_x19[0xc];
      plVar4 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,6);
      if (plVar4 == (long *)0x0) goto LAB_02152f50;
      lVar11 = unaff_x19[0xd];
      if ((lVar11 != 0) &&
         (lVar5 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_02152f44;
      if ((int)plVar4[3] == 0) goto LAB_02152f40;
      plVar4[4] = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 4,lVar11);
      puVar3 = PTR_DAT_03cbeda8;
      uStack000000000000001c = (undefined4)unaff_x19[10];
      lVar11 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,(long)&stack0x00000018 + 4);
      if ((lVar11 != 0) &&
         (lVar5 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_02152f44;
      if (*(uint *)(plVar4 + 3) < 2) goto LAB_02152f40;
      plVar4[5] = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 5,lVar11);
      iStack0000000000000018 = iVar13;
      lVar11 = thunk_FUN_01a89a98(*(undefined8 *)puVar3,&stack0x00000018);
      if ((lVar11 != 0) &&
         (lVar5 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_02152f44;
      if (*(uint *)(plVar4 + 3) < 3) goto LAB_02152f40;
      plVar4[6] = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 6,lVar11);
      lVar11 = thunk_FUN_01a89a98(*(undefined8 *)puVar3,&stack0x0000000c);
      if ((lVar11 != 0) &&
         (lVar5 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_02152f44;
      if (*(uint *)(plVar4 + 3) < 4) goto LAB_02152f40;
      plVar4[7] = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 7,lVar11);
      in_stack_00000008 = (undefined4)unaff_x19[5];
      lVar11 = thunk_FUN_01a89a98(*(undefined8 *)puVar3,&stack0x00000008);
      if ((lVar11 != 0) &&
         (lVar5 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_02152f44;
      if (*(uint *)(plVar4 + 3) < 5) goto LAB_02152f40;
      plVar4[8] = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 8,lVar11);
      in_stack_00000000._4_4_ = *(int *)((long)unaff_x19 + 0x4c) + unaff_w20;
      lVar11 = thunk_FUN_01a89a98(*(undefined8 *)puVar3,(long)&stack0x00000000 + 4);
      if ((lVar11 != 0) &&
         (lVar5 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_02152f44;
      if (*(uint *)(plVar4 + 3) < 6) goto LAB_02152f40;
      plVar4[9] = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 9,lVar11);
      if (plVar10 == (long *)0x0) goto LAB_02152f50;
      lVar11 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      uVar12 = *(undefined8 *)PTR_DAT_03cdadb8;
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03ccf278) {
            puVar6 = (undefined8 *)(lVar11 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto LAB_02152b9c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)PTR_DAT_03ccf278,3);
LAB_02152b9c:
      (*(code *)*puVar6)(plVar10,uVar12,plVar4,puVar6[1]);
    }
  }
  if ((iVar13 <= *(int *)((long)unaff_x19 + 0x4c)) && ((char)unaff_x19[0x15] != '\0')) {
    lVar11 = unaff_x19[0x12];
    if ((char)lVar11 == '\0') {
      if (unaff_x19[0x11] == 0) goto LAB_02152f50;
      FUN_020a3ab0();
      FUN_0279cdc8();
      FUN_0215309c();
      *(undefined1 *)(unaff_x19 + 0x15) = 0;
      if ((char)unaff_x19[0xe] == '\0') {
        return;
      }
    }
    else {
      *(undefined1 *)(unaff_x19 + 0x15) = 0;
      if ((char)unaff_x19[0xe] == '\0') goto FUN_02152e9c;
    }
    plVar10 = (long *)unaff_x19[0xc];
    plVar4 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,6);
    if (plVar4 == (long *)0x0) goto LAB_02152f50;
    lVar5 = unaff_x19[0xd];
    if ((lVar5 != 0) &&
       (lVar7 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0)) {
LAB_02152f44:
      uVar12 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar12,0);
    }
    if ((int)plVar4[3] == 0) {
LAB_02152f40:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar4[4] = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 4,lVar5);
    puVar3 = PTR_DAT_03cbeda8;
    uStack000000000000001c = (undefined4)unaff_x19[10];
    lVar5 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,(long)&stack0x00000018 + 4);
    if ((lVar5 != 0) &&
       (lVar7 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0))
    goto LAB_02152f44;
    if (*(uint *)(plVar4 + 3) < 2) goto LAB_02152f40;
    plVar4[5] = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 5,lVar5);
    iStack0000000000000018 = iVar13;
    lVar5 = thunk_FUN_01a89a98(*(undefined8 *)puVar3,&stack0x00000018);
    if ((lVar5 != 0) &&
       (lVar7 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0))
    goto LAB_02152f44;
    if (*(uint *)(plVar4 + 3) < 3) goto LAB_02152f40;
    plVar4[6] = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 6,lVar5);
    lVar5 = thunk_FUN_01a89a98(*(undefined8 *)puVar3,&stack0x0000000c);
    if ((lVar5 != 0) &&
       (lVar7 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0))
    goto LAB_02152f44;
    if (*(uint *)(plVar4 + 3) < 4) goto LAB_02152f40;
    plVar4[7] = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 7,lVar5);
    in_stack_00000008 = (undefined4)unaff_x19[5];
    lVar5 = thunk_FUN_01a89a98(*(undefined8 *)puVar3,&stack0x00000008);
    if ((lVar5 != 0) &&
       (lVar7 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0))
    goto LAB_02152f44;
    if (*(uint *)(plVar4 + 3) < 5) goto LAB_02152f40;
    plVar4[8] = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 8,lVar5);
    in_stack_00000000._4_4_ = *(int *)((long)unaff_x19 + 0x4c) + unaff_w20;
    lVar5 = thunk_FUN_01a89a98(*(undefined8 *)puVar3,(long)&stack0x00000000 + 4);
    if ((lVar5 != 0) &&
       (lVar7 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0))
    goto LAB_02152f44;
    if (*(uint *)(plVar4 + 3) < 6) goto LAB_02152f40;
    plVar4[9] = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 9,lVar5);
    if (plVar10 == (long *)0x0) goto LAB_02152f50;
    lVar5 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    uVar12 = *(undefined8 *)PTR_DAT_03cdadd0;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03ccf278) {
          puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto LAB_02152e84;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)PTR_DAT_03ccf278,3);
LAB_02152e84:
    (*(code *)*puVar6)(plVar10,uVar12,plVar4,puVar6[1]);
    if ((char)lVar11 == '\0') {
      return;
    }
  }
FUN_02152e9c:
  if ((char)unaff_x19[0x15] == '\0') {
    (**(code **)(*unaff_x19 + 0x218))();
    iVar1 = *(int *)((long)unaff_x19 + 0x1c);
    iVar13 = 0;
    if (*(int *)((long)unaff_x19 + 0x44) != 0) {
      iVar13 = *(int *)(unaff_x21 + 0x18) / *(int *)((long)unaff_x19 + 0x44);
    }
    iVar13 = iVar13 + (int)unaff_x19[5];
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = iVar13 / iVar1;
    }
    *(int *)(unaff_x19 + 5) = iVar13 - iVar2 * iVar1;
  }
  else if ((char)unaff_x19[0x12] == '\0') {
    if (unaff_x19[0x11] == 0) {
LAB_02152f50:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_020a39e0();
    FUN_0215309c();
  }
  return;
}


