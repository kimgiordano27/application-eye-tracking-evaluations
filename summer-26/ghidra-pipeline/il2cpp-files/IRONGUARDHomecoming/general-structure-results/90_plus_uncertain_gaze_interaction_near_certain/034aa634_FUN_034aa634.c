/*
FUNCTION_NAME: FUN_034aa634
ENTRY_POINT: 034aa634
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 174
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x034aad40) */
/* WARNING: Removing unreachable block (ram,0x034aa860) */
/* WARNING: Removing unreachable block (ram,0x034aa998) */
/* WARNING: Removing unreachable block (ram,0x034aada8) */

long FUN_034aa634(long param_1,long param_2,uint param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  long local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  char local_7c [4];
  int local_78;
  char local_74 [4];
  long local_70;
  ulong uStack_68;
  
  if ((DAT_04832bf3 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextInfo_Resize<TextElementInfo>__);
    thunk_FUN_01efb3a4(Method_System_IO_TextReader_Read__);
    thunk_FUN_01efb3a4(Method_System_Globalization_TextInfo_ToLower__);
    thunk_FUN_01efb3a4(Method_System_IO_TextReader_Synchronized__);
    thunk_FUN_01efb3a4(Method_System_Globalization_TextInfo_ToTitleCase__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextInfo_Resize<WordInfo>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<OVRLipSyncContextTextureFlip>__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    DAT_04832bf3 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  local_7c[0] = '\0';
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  local_98 = 0;
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar15 = thunk_FUN_01f117cc();
    uVar11 = thunk_FUN_01efb3a4(Method_System_Decimal_ToInt32__);
    FUN_034efd20(uVar15,uVar11,0);
LAB_034aad28:
    uVar11 = thunk_FUN_01efb3a4(
                               Method_UnityEngine_UIElements_TextSelectingManipulator_OnCursorIndexChange__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar15,uVar11);
  }
  lVar13 = *(long *)(param_1 + 0x10);
  if ((lVar13 == 0) || (*(long *)(param_1 + 0x28) == 0)) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    uVar15 = thunk_FUN_01f117cc();
    uVar11 = thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextInfo_Resize<MeshInfo>__);
    FUN_035795c8(uVar15,0,uVar11,0);
    goto LAB_034aad28;
  }
  local_74[0] = '\0';
  FUN_035ce230(lVar13,local_74,0);
  puVar8 = (undefined8 *)Method_System_IO_TextReader_Read__;
  if (*(long *)(param_1 + 0x10) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    uVar15 = thunk_FUN_01f117cc();
    uVar11 = thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextInfo_Resize<MeshInfo>__);
    FUN_035795c8(uVar15,0,uVar11,0);
    uVar11 = thunk_FUN_01efb3a4(
                               Method_UnityEngine_UIElements_TextSelectingManipulator_OnCursorIndexChange__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar15,uVar11);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = FUN_02b72aa0(*(long *)(param_1 + 0x28),param_2,&local_70,
                         *(undefined8 *)Method_System_IO_TextReader_Read__);
    uVar5 = (uint)uStack_68;
    lVar7 = local_70;
    if ((uVar6 & 1) == 0) {
      lVar7 = 0;
      uVar5 = 0xffffffff;
    }
    if ((lVar7 == 0) && (uVar5 == 0xffffffff)) {
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar5 = FUN_034aafc0(*(long *)(param_1 + 0x30),param_2);
    }
    if ((lVar7 == 0) && (uVar5 != 0xffffffff)) {
      lVar7 = *(long *)(param_1 + 0x30);
      if ((param_4 & 1) == 0) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar7 = FUN_034ab620(lVar7,uVar5,&local_78);
        local_b0 = lVar7;
        if (0x10 < local_78) {
          local_b0 = 0;
        }
      }
      else {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar7 = FUN_034ab378(lVar7,uVar5);
        local_78 = 1;
        local_b0 = lVar7;
      }
      uStack_a8 = (ulong)uVar5;
      thunk_FUN_01f51358(&local_b0);
      uStack_68 = uStack_a8;
      local_70 = local_b0;
      uVar15 = *(undefined8 *)(param_1 + 0x28);
      local_7c[0] = '\0';
      FUN_035ce230(uVar15,local_7c,0);
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_02b712a4(*(long *)(param_1 + 0x28),param_2,local_70,uStack_68,
                   *(undefined8 *)Method_System_IO_TextReader_Synchronized__);
      if (local_7c[0] != '\0') {
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar15,0);
      }
    }
    if ((lVar7 != 0) || ((param_3 & 1) == 0)) goto LAB_034aac64;
  }
  puVar1 = Method_UnityEngine_GameObject_GetComponent<OVRLipSyncContextTextureFlip>__;
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (((param_3 & 1) != 0) && (plVar14 = (long *)(param_1 + 0x38), *plVar14 == 0)) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_GameObject_GetComponent<OVRLipSyncContextTextureFlip>__ +
                  0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (DAT_048321c0 == '\0') {
        thunk_FUN_01efb3a4(
                          Method_UnityEngine_GameObject_GetComponent<OVRLipSyncContextTextureFlip>__
                          );
        DAT_048321c0 = '\x01';
      }
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar7 = *(long *)puVar1;
      }
      uVar15 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Globalization_TextInfo_ToTitleCase__);
      FUN_02b70a5c(lVar7,uVar15,*(undefined8 *)Method_System_Globalization_TextInfo_ToLower__);
      *plVar14 = lVar7;
      thunk_FUN_01f51358(plVar14,lVar7);
    }
    if (*(long *)(param_1 + 0x30) == 0) {
      plVar14 = *(long **)(param_1 + 0x10);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *plVar14;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_UnityEngine_TextCore_Text_TextInfo_Resize<WordInfo>__) {
            puVar8 = (undefined8 *)(lVar7 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_034aaa04;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar14,*(long *)
                                     Method_UnityEngine_TextCore_Text_TextInfo_Resize<WordInfo>__,1)
      ;
LAB_034aaa04:
      plVar14 = (long *)(*(code *)*puVar8)(plVar14,puVar8[1]);
      puVar4 = Method_UnityEngine_TextCore_Text_TextInfo_Resize<TextElementInfo>__;
      puVar3 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__;
      puVar2 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar7 = *plVar14;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar8 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_034aaa88;
            }
            uVar6 = uVar6 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar1,0);
LAB_034aaa88:
        uVar6 = (*(code *)*puVar8)(plVar14,puVar8[1]);
        puVar8 = (undefined8 *)Method_System_IO_TextReader_Read__;
        if ((uVar6 & 1) == 0) {
          if ((param_3 & 1) != 0) goto LAB_034aabc8;
          plVar14 = *(long **)(param_1 + 0x10);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar7 = *plVar14;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 == 0) goto LAB_034aaba0;
          piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_034aab88;
        }
        lVar7 = *plVar14;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar7 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_034aaae8;
            }
            uVar6 = uVar6 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar3,2);
LAB_034aaae8:
        auVar16 = (*(code *)*puVar8)(plVar14,puVar8[1]);
        plVar9 = auVar16._0_8_;
        if ((plVar9 != (long *)0x0) && (*plVar9 != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar9,*(long *)puVar2);
        }
        local_88 = CONCAT44(local_88._4_4_,0xffffffff);
        local_90 = auVar16._8_8_;
        thunk_FUN_01f51358(&local_90);
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02b712b8(*(long *)(param_1 + 0x28),plVar9,local_90,local_88,*(undefined8 *)puVar4);
        if ((param_3 & 1) != 0) {
          if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_02b712b8(*(long *)(param_1 + 0x38),plVar9,local_90,local_88,*(undefined8 *)puVar4);
        }
      } while( true );
    }
    lVar7 = FUN_034ab6d4();
    puVar2 = Method_UnityEngine_TextCore_Text_TextInfo_Resize<TextElementInfo>__;
    puVar1 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    while (uVar6 = FUN_034ab7fc(lVar7), (uVar6 & 1) != 0) {
      plVar14 = (long *)FUN_034ab74c(lVar7);
      if ((plVar14 != (long *)0x0) && (*plVar14 != *(long *)puVar1)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar14);
      }
      local_a0 = 0;
      local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(lVar7 + 0x20));
      thunk_FUN_01f51358(&local_a0,0);
      if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_02b712b8(*(long *)(param_1 + 0x38),plVar14,local_a0,local_98,*(undefined8 *)puVar2);
    }
    goto LAB_034aabc8;
  }
  goto LAB_034aabd0;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar12 = piVar12 + 4;
    if (uVar6 == 0) break;
LAB_034aab88:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_UnityEngine_TextCore_Text_TextInfo_Resize<WordInfo>__) {
      puVar10 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_034aabbc;
    }
  }
LAB_034aaba0:
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar14,*(long *)
                                  Method_UnityEngine_TextCore_Text_TextInfo_Resize<WordInfo>__,0);
LAB_034aabbc:
  (*(code *)*puVar10)(plVar14,puVar10[1]);
LAB_034aabc8:
  *(undefined1 *)(param_1 + 0x40) = 1;
LAB_034aabd0:
  if (*(long *)(param_1 + 0x30) == 0) {
LAB_034aac18:
    lVar7 = 0;
    uVar5 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = FUN_02b72aa0(*(long *)(param_1 + 0x28),param_2,&local_70,*puVar8);
    if ((uVar6 & 1) == 0) goto LAB_034aac18;
    lVar7 = FUN_034ab86c(param_1,local_70,uStack_68,param_2,*(undefined8 *)(param_1 + 0x28),0);
    uVar5 = 0;
  }
  if ((param_3 & uVar5) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = FUN_02b72aa0(*(long *)(param_1 + 0x38),param_2,&local_70,*puVar8);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_034ab86c(param_1,local_70,uStack_68,param_2,*(undefined8 *)(param_1 + 0x28),1);
    }
  }
LAB_034aac64:
  if (local_74[0] != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(lVar13,0);
  }
  return lVar7;
}


