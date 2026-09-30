/*
FUNCTION_NAME: FUN_0416a8b4
ENTRY_POINT: 0416a8b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_5;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0416a8b4(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11,long param_12,byte param_13,
                 undefined8 param_14)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  undefined8 uVar24;
  int iVar25;
  long lVar26;
  long *plVar27;
  undefined1 auStack_41a0 [16392];
  undefined8 local_198;
  undefined8 *local_190;
  long local_188;
  long local_180;
  uint local_174;
  undefined1 *local_170;
  int local_164;
  int local_160;
  uint local_15c;
  undefined8 local_158;
  uint local_14c;
  undefined8 local_148;
  int local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  long local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long lStack_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  
  local_180 = tpidr_el0;
  local_80 = *(long *)(local_180 + 0x28);
  local_a0 = param_10;
  uStack_98 = param_11;
  local_158 = param_5;
  local_90 = param_8;
  uStack_88 = param_9;
  if ((DAT_04840b20 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleDataRef<TransformData>_Release__);
    thunk_FUN_01efb3a4(PTR_DAT_0458c8d0);
    thunk_FUN_01efb3a4(PTR_DAT_0458c8d8);
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_CompilerServices_TaskAwaiter<GameObject>_get_IsCompleted__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_0458c8e0);
    thunk_FUN_01efb3a4(PTR_DAT_0458c8e8);
    thunk_FUN_01efb3a4(PTR_DAT_0458c8f0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_0458c8f8);
    thunk_FUN_01efb3a4(PTR_DAT_0458c008);
    thunk_FUN_01efb3a4(PTR_DAT_0458c900);
    thunk_FUN_01efb3a4(PTR_DAT_0458c908);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Core_Initialize__);
    DAT_04840b20 = 1;
  }
  local_b0 = 0;
  local_a8 = 0;
  uStack_f0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  lStack_b8 = 0;
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  lStack_f8 = 0;
  local_100 = 0;
  uStack_118 = 0;
  local_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  if (*(int *)(*(long *)Method_Oculus_Platform_Core_Initialize__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_041577c0(0);
  lVar19 = *(long *)(param_2 + 0x98);
  if (lVar19 != 0) {
    local_15c = (uint)*(byte *)(param_2 + 0xac);
    FUN_0416b470(lVar19);
    lVar26 = *(long *)(lVar19 + 0x20);
    uVar13 = FUN_0405cdfc(0);
    if (lVar26 != 0) {
      lVar16 = *(long *)(lVar26 + 0x10);
      lVar18 = *(long *)PTR_DAT_0458c8d0;
      *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
      local_188 = lVar19;
      if (lVar16 != 0) {
        uVar11 = *(uint *)(lVar26 + 0x18);
        if (uVar11 < *(uint *)(lVar16 + 0x18)) {
          *(uint *)(lVar26 + 0x18) = uVar11 + 1;
          *(undefined8 *)(lVar16 + (long)(int)uVar11 * 8 + 0x20) = uVar13;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4(lVar26,uVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
        }
        if ((param_12 != 0) &&
           (FUN_0404b598(param_12,0),
           plVar27 = (long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__,
           *(long *)(param_2 + 0xa0) != 0)) {
          FUN_041619d8();
          if (*(long *)(param_2 + 0x50) != 0) {
            if (*(int *)(*plVar27 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar14 = FUN_04073094(param_6,0,0);
            puVar6 = PTR_DAT_0458c008;
            if ((uVar14 & 1) != 0) {
              lVar19 = *(long *)(param_2 + 0x58);
              if (*(int *)(*(long *)PTR_DAT_0458c008 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              if (lVar19 == 0) goto LAB_0416b468;
              FUN_0404bf34(lVar19,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10),param_6,
                           0);
              plVar27 = (long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
            }
            if (*(int *)(*plVar27 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar14 = FUN_04073094(param_7,0,0);
            puVar6 = PTR_DAT_0458c008;
            if ((uVar14 & 1) != 0) {
              lVar19 = *(long *)(param_2 + 0x58);
              if (*(int *)(*(long *)PTR_DAT_0458c008 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              if (lVar19 == 0) goto LAB_0416b468;
              FUN_0404bf34(lVar19,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x14),param_7,
                           0);
            }
            puVar7 = PTR_DAT_0458c8f0;
            iVar10 = FUN_0331f7d8(&local_90,*(undefined8 *)PTR_DAT_0458c8e8);
            puVar6 = PTR_DAT_0458c008;
            if (0 < iVar10) {
              uVar13 = *(undefined8 *)(param_2 + 0x58);
              lVar19 = *(long *)PTR_DAT_0458c008;
              if (*(int *)(lVar19 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar19 = *(long *)puVar6;
              }
              uVar8 = uStack_88;
              uVar24 = local_90;
              uVar3 = *(undefined4 *)(*(long *)(lVar19 + 0xb8) + 0x18);
              if (*(int *)(*(long *)Method_Oculus_Platform_Core_Initialize__ + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_02450f70(uVar13,uVar3,uVar24,uVar8,*(undefined8 *)PTR_DAT_0458c900);
              plVar27 = (long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
            }
            iVar10 = FUN_03321164(&local_a0,*(undefined8 *)puVar7);
            puVar6 = PTR_DAT_0458c008;
            if (0 < iVar10) {
              uVar13 = *(undefined8 *)(param_2 + 0x58);
              lVar19 = *(long *)PTR_DAT_0458c008;
              if (*(int *)(lVar19 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar19 = *(long *)puVar6;
              }
              uVar8 = uStack_98;
              uVar24 = local_a0;
              uVar3 = *(undefined4 *)(*(long *)(lVar19 + 0xb8) + 0x1c);
              if (*(int *)(*(long *)Method_Oculus_Platform_Core_Initialize__ + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_0245103c(uVar13,uVar3,uVar24,uVar8,*(undefined8 *)PTR_DAT_0458c908);
              plVar27 = (long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
            }
            uVar13 = *(undefined8 *)(param_2 + 0x58);
            if (*(int *)(*(long *)Method_Oculus_Platform_Core_Initialize__ + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            FUN_041573ec(uVar13,0);
          }
          local_170 = auStack_41a0;
          local_174 = (uint)param_13;
          memset(local_170,0,0x4000);
          local_a8 = 0;
          local_110 = 0;
          uStack_118 = 0;
          local_100 = 0;
          uStack_108 = 0;
          uStack_f0 = 0;
          lStack_f8 = 0;
          local_120 = param_12;
          thunk_FUN_01f51358(&local_120,param_12);
          uStack_118 = local_158;
          thunk_FUN_01f51358((ulong)&local_120 | 8);
          uStack_130 = 0;
          local_128 = 0;
          local_138 = param_4;
          thunk_FUN_01f51358(&local_138,param_4);
          uStack_108 = uStack_130;
          local_110 = local_138;
          local_100 = local_128;
          thunk_FUN_01f51358(&local_110,0);
          uVar13 = uStack_f0;
          uStack_f0._4_4_ = SUB84(uVar13,4);
          uStack_f0._0_4_ = CONCAT13(1,CONCAT21(0x101,(undefined1)uStack_f0));
          uStack_d8 = uStack_118;
          local_e0 = local_120;
          uStack_c8 = uStack_108;
          local_d0 = local_110;
          lStack_b8 = lStack_f8;
          local_c0 = local_100;
          local_b0 = uStack_f0;
          if (param_3 != 0) {
            local_164 = 0;
            iVar10 = 0;
            iVar25 = 0;
            local_198 = param_14;
            iVar22 = 0;
            local_190 = &local_d0;
            iVar20 = -1;
            local_160 = 0;
            do {
              while( true ) {
                iVar12 = *(int *)(param_2 + 0x74);
                *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + 1;
                if (*(int *)(param_3 + 0x34) == 0) {
                  iVar12 = iVar12 + 1;
                }
                *(int *)(param_2 + 0x74) = iVar12;
                local_13c = iVar20;
                if (*(int *)(param_3 + 0x34) == 0) break;
                bVar5 = false;
                local_148 = 0;
                local_14c = 0;
                iVar12 = -1;
                bVar9 = true;
LAB_0416b0a8:
                bVar4 = local_15c != 0 | bVar9;
                if (0 < iVar22) {
                  iVar20 = local_164 + 1;
                  local_a8 = CONCAT44(local_a8._4_4_,iVar20);
                  piVar1 = (int *)(local_170 +
                                  ((ulong)(uint)((local_164 + local_a8._4_4_) * 0x10) & 0x3ff0));
                  piVar1[2] = iVar25;
                  piVar1[3] = iVar10;
                  *piVar1 = local_160;
                  piVar1[1] = iVar22;
                  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0)
                      == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  local_164 = iVar20;
                  UnityEngine_UIElements_Vector4Field___ctor(bVar4 | iVar20 < 0x400,0);
                  iVar22 = 0;
                  iVar25 = 0;
                  iVar10 = 0;
                  local_160 = 0;
                  *(int *)(param_2 + 0x7c) = *(int *)(param_2 + 0x7c) + 1;
                }
                iVar20 = local_13c;
                if (*(int *)(param_3 + 0x34) == 0) {
                  lVar19 = *(long *)(param_3 + 0x50);
                  if (lVar19 == 0) goto LAB_0416b468;
                  iVar22 = *(int *)(param_3 + 0x5c);
                  iVar25 = *(int *)(lVar19 + 0x18);
                  iVar10 = *(int *)(lVar19 + 0x1c);
                  local_160 = *(int *)(param_3 + 0x58) + *(int *)(lVar19 + 0x30);
                  *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + iVar22;
                  iVar20 = iVar22 + local_160;
                }
                local_13c = iVar20;
                if (bVar4 != 0) {
                  if (0 < local_164) {
                    FUN_0416a724(param_2,&local_e0,local_174 & 1);
                    FUN_0416b638(param_2,local_170,&local_a8,(long)&local_a8 + 4,0x400,lStack_b8);
                  }
                  iVar20 = local_13c;
                  uVar11 = *(uint *)(param_3 + 0x34);
                  if (uVar11 != 0) {
                    if (*(char *)(param_2 + 0x10) == '\0') {
                      FUN_0416b880(param_1,param_3,local_188,local_198);
                      uVar11 = *(uint *)(param_3 + 0x34);
                    }
                    if ((uVar11 < 0xc) && ((1 << (ulong)(uVar11 & 0x1f) & 0xe86U) != 0)) {
                      local_d0 = 0;
                      thunk_FUN_01f51358(local_190,0);
                      lVar19 = local_188;
                      local_b0 = local_b0 & 0xffffffffffffff00;
                      *(int *)(param_2 + 0x84) = *(int *)(param_2 + 0x84) + 1;
                      iVar15 = *(int *)(param_3 + 0x34);
                      if (iVar15 == 0xb) {
                        lVar26 = *(long *)(local_188 + 0x28);
                        if (lVar26 == 0) goto LAB_0416b468;
                        iVar20 = *(int *)(lVar26 + 0x18) + -1;
                        local_158 = FUN_030f28e4(lVar26,iVar20,*(undefined8 *)PTR_DAT_0458c8e0);
                        if (*(long *)(lVar19 + 0x28) == 0) goto LAB_0416b468;
                        FUN_030f42ac(*(long *)(lVar19 + 0x28),iVar20,*(undefined8 *)PTR_DAT_0458c8d8
                                    );
                        iVar15 = *(int *)(param_3 + 0x34);
                        iVar20 = local_13c;
                      }
                      if (iVar15 == 10) {
                        lVar19 = *(long *)(local_188 + 0x28);
                        if (lVar19 == 0) goto LAB_0416b468;
                        lVar26 = *(long *)(lVar19 + 0x10);
                        lVar16 = *(long *)
                                  Method_UnityEngine_UIElements_StyleDataRef<TransformData>_Release__
                        ;
                        *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
                        if (lVar26 == 0) goto LAB_0416b468;
                        uVar11 = *(uint *)(lVar19 + 0x18);
                        if (uVar11 < *(uint *)(lVar26 + 0x18)) {
                          *(uint *)(lVar19 + 0x18) = uVar11 + 1;
                          puVar17 = (undefined8 *)(lVar26 + (long)(int)uVar11 * 8 + 0x20);
                          *puVar17 = local_158;
                          thunk_FUN_01f51358(puVar17);
                        }
                        else {
                          FUN_030f2bb4(lVar19,local_158,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                        }
                        local_158 = *(undefined8 *)(param_3 + 0x38);
                      }
                    }
                  }
                }
                if (!(bool)(bVar5 ^ 1U | *(int *)(param_3 + 0x34) != 0)) {
                  FUN_041710e0(param_2,param_3,iVar12,local_148,local_14c & 1,&local_e0,0);
                }
                param_3 = *(long *)(param_3 + 0x28);
                if (param_3 == 0) goto LAB_0416b388;
                local_164 = (int)local_a8;
              }
              uVar13 = *(undefined8 *)(param_3 + 0x38);
              if (*(int *)(*plVar27 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar14 = FUN_04073094(uVar13,0,0);
              uVar13 = local_d0;
              uVar24 = local_158;
              if ((uVar14 & 1) != 0) {
                uVar24 = *(undefined8 *)(param_3 + 0x38);
              }
              if (*(int *)(*plVar27 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar11 = FUN_04073094(uVar24,uVar13,0);
              puVar6 = 
              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__;
              lVar19 = *(long *)(param_3 + 0x50);
              if (lVar19 == 0) goto LAB_0416b468;
              if (*(long *)(lVar19 + 0x50) == lStack_b8) {
                uVar23 = uVar11 & 1;
                uVar21 = uVar23;
                if ((long)*(int *)(param_3 + 0x58) + (ulong)*(uint *)(lVar19 + 0x30) != (long)iVar20
                   ) {
                  uVar21 = 1;
                }
              }
              else {
                uVar23 = 1;
                uVar21 = 1;
              }
              lVar19 = *(long *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__
              ;
              iVar20 = *(int *)(param_3 + 0x40);
              local_14c = uVar11;
              local_148 = uVar24;
              if (*(int *)(lVar19 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar19 = *(long *)puVar6;
              }
              puVar6 = 
              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__;
              iVar12 = **(int **)(lVar19 + 0xb8);
              if (DAT_04840b56 == '\0') {
                thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__
                                  );
                lVar19 = *(long *)puVar6;
                DAT_04840b56 = '\x01';
              }
              if (*(int *)(lVar19 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              plVar27 = (long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
              uVar11 = uVar23;
              if (iVar20 == iVar12) {
                iVar12 = -1;
              }
              else {
                if (*(long *)(param_2 + 0xa0) == 0) goto LAB_0416b468;
                iVar12 = FUN_04161c8c(*(long *)(param_2 + 0xa0),*(undefined4 *)(param_3 + 0x40));
                if (iVar12 < 0) {
                  if (*(long *)(param_2 + 0xa0) == 0) goto LAB_0416b468;
                  bVar9 = *(int *)(*(long *)(param_2 + 0xa0) + 0x30) < 1;
                }
                else {
                  bVar9 = false;
                }
                if (bVar9) {
                  uVar11 = 1;
                  uVar21 = 1;
                }
                uVar23 = 1;
              }
              bVar9 = *(int *)(param_3 + 0x44) != uStack_c8._4_4_;
              if (bVar9) {
                uVar21 = 1;
              }
              bVar5 = uVar23 != 0 || bVar9;
              if (local_15c != 0 || uVar21 != 0) {
                bVar9 = (uVar11 != 0 || bVar9) || (uVar21 & (0 < iVar22 && local_164 == 0x3ff)) != 0
                ;
                goto LAB_0416b0a8;
              }
              lVar19 = *(long *)(param_3 + 0x50);
              if (iVar22 == 0) {
                if (lVar19 == 0) goto LAB_0416b468;
                local_160 = *(int *)(param_3 + 0x58) + *(int *)(lVar19 + 0x30);
                local_13c = local_160;
              }
              else if (lVar19 == 0) goto LAB_0416b468;
              iVar2 = *(int *)(lVar19 + 0x18);
              iVar20 = *(int *)(param_3 + 0x5c);
              iVar10 = iVar10 + iVar25;
              iVar15 = *(int *)(lVar19 + 0x1c) + iVar2;
              if (iVar2 <= iVar25) {
                iVar25 = iVar2;
              }
              if (iVar10 <= iVar15) {
                iVar10 = iVar15;
              }
              iVar10 = iVar10 - iVar25;
              *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + iVar20;
              if (uVar23 != 0 || bVar9) {
                FUN_041710e0(param_2,param_3,iVar12,local_148,local_14c & 1,&local_e0,0);
              }
              param_3 = *(long *)(param_3 + 0x28);
              iVar22 = iVar20 + iVar22;
              iVar20 = iVar20 + local_13c;
            } while (param_3 != 0);
LAB_0416b388:
            if (0 < iVar22) {
              iVar20 = (int)local_a8 + local_a8._4_4_;
              local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 + 1);
              piVar1 = (int *)(local_170 + ((ulong)(uint)(iVar20 * 0x10) & 0x3ff0));
              piVar1[2] = iVar25;
              piVar1[3] = iVar10;
              *piVar1 = local_160;
              piVar1[1] = iVar22;
            }
          }
          if (0 < (int)local_a8) {
            FUN_0416a724(param_2,&local_e0,local_174 & 1);
            FUN_0416b638(param_2,local_170,&local_a8,(long)&local_a8 + 4,0x400,lStack_b8);
          }
          FUN_0416c360(param_2);
          if (*(int *)(*(long *)Method_Oculus_Platform_Core_Initialize__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_041577e8(0);
          if (*(long *)(local_180 + 0x28) == local_80) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
    }
  }
LAB_0416b468:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


