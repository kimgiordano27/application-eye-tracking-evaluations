/*
FUNCTION_NAME: OVRTelemetry$$.cctor
ENTRY_POINT: 01a7acdc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void OVRTelemetry___cctor(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  int *piVar17;
  uint uVar18;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x5b0));
  thunk_FUN_00d48444(StringLiteral_3033);
  thunk_FUN_00d48444(
                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass58_0_<DOShakeRotation>b__0__
                    );
  thunk_FUN_00d48444(Method_SuperTextMeshData_<>c_<RebuildDictionaries>b__45_15__);
  thunk_FUN_00d48444(StringLiteral_797);
  *(undefined1 *)(unaff_x22 + 0xc64) = 1;
  puVar4 = PTR_DAT_033eee28;
  if ((unaff_x20 != 0) && (*(long *)(unaff_x19 + 0x20) != 0)) {
    uVar3 = 0;
    if (unaff_w21 != 0) {
      uVar3 = *(int *)(unaff_x20 + 0x18) / (int)unaff_w21;
    }
    if (*(int *)(*(long *)(unaff_x19 + 0x20) + 0x18) < (int)uVar3) {
      FUN_00ac2be8();
      FUN_0179519c();
      puVar4 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
      uStack000000000000000c = uVar3;
      uVar13 = thunk_FUN_00d48444(
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 );
      uVar13 = thunk_FUN_00d61fa0(uVar13,(long)&stack0x00000008 + 4);
      lVar14 = *(long *)(unaff_x19 + 0x20);
      FUN_00ac2be8(lVar14);
      uStack0000000000000008 = (uint)*(undefined8 *)(lVar14 + 0x18);
      uVar11 = thunk_FUN_00d48444(puVar4);
      uVar11 = thunk_FUN_00d61fa0(uVar11,&stack0x00000008);
      uVar12 = thunk_FUN_00d48444(
                                 Method_BroadcastKeyMessages_<BroadcastMessages>d__2_System_Collections_IEnumerator_Reset__
                                 );
      uVar13 = FUN_01600b5c(uVar12,uVar13,uVar11,0);
      thunk_FUN_00d48444(
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                        );
      uVar11 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      FUN_017a9608(uVar11,uVar13,0);
      uVar13 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<InputAction>_ToArray__);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar11,uVar13);
    }
    if ((*(long *)(unaff_x19 + 0x18) != 0) &&
       (plVar19 = *(long **)(*(long *)(unaff_x19 + 0x18) + 0x30), plVar19 != (long *)0x0)) {
      lVar14 = *plVar19;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_033eee28) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar17 + 3) * 0x10 + 0x138);
            goto OVRTelemetry_MarkerPoint___ctor;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar19,*(long *)PTR_DAT_033eee28,3);
OVRTelemetry_MarkerPoint___ctor:
      puVar7 = StringLiteral_3033;
      puVar6 = StringLiteral_302;
      puVar5 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
      uVar8 = (*(code *)*puVar9)(plVar19,puVar9[1]);
      if ((int)uVar8 < (int)uVar3) {
        if (*(char *)(*(long *)(*(long *)
                                 Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass58_0_<DOShakeRotation>b__0__
                               + 0xb8) + 4) == '\0') {
          return;
        }
        plVar19 = (long *)FUN_00da4fb8(*(undefined8 *)puVar7,2);
        uStack000000000000000c = uVar3;
        lVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,(long)&stack0x00000008 + 4);
        if (plVar19 != (long *)0x0) {
          if ((lVar14 != 0) &&
             (lVar10 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar19 + 0x40)), lVar10 == 0)) {
LAB_01a7b150:
            uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar13,0);
          }
          if ((int)plVar19[3] != 0) {
            plVar19[4] = lVar14;
            uStack0000000000000008 = uVar8;
            lVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&stack0x00000008);
            if ((lVar14 != 0) &&
               (lVar10 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar19 + 0x40)), lVar10 == 0))
            goto LAB_01a7b150;
            if (1 < *(uint *)(plVar19 + 3)) {
              plVar19[5] = lVar14;
              puVar4 = Method_SuperTextMeshData_<>c_<RebuildDictionaries>b__45_15__;
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_02660fcc(*(undefined8 *)puVar4,plVar19,0);
              return;
            }
          }
LAB_01a7b084:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
      }
      else if ((*(long *)(unaff_x19 + 0x18) != 0) &&
              (plVar19 = *(long **)(*(long *)(unaff_x19 + 0x18) + 0x30), plVar19 != (long *)0x0)) {
        lVar14 = *plVar19;
        uVar13 = *(undefined8 *)(unaff_x19 + 0x20);
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
              puVar9 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_01a7af00;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar9 = (undefined8 *)FUN_00d59724(plVar19,*(long *)puVar4,0);
LAB_01a7af00:
        uVar8 = (*(code *)*puVar9)(plVar19,uVar13,uVar3,puVar9[1]);
        if ((int)uVar8 < (int)uVar3) {
          plVar19 = (long *)FUN_00da4fb8(*(undefined8 *)puVar7,2);
          uStack000000000000000c = uVar8;
          lVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,(long)&stack0x00000008 + 4);
          if (plVar19 != (long *)0x0) {
            if ((lVar14 == 0) ||
               (lVar10 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar19 + 0x40)), lVar10 != 0))
            {
              if ((int)plVar19[3] != 0) {
                plVar19[4] = lVar14;
                uStack0000000000000008 = uVar3;
                lVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&stack0x00000008);
                if ((lVar14 != 0) &&
                   (lVar10 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar19 + 0x40)),
                   lVar10 == 0)) goto LAB_01a7b150;
                if (1 < *(uint *)(plVar19 + 3)) {
                  plVar19[5] = lVar14;
                  puVar4 = StringLiteral_797;
                  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  FUN_02661974(*(undefined8 *)puVar4,plVar19,0);
                  return;
                }
              }
              goto LAB_01a7b084;
            }
            goto LAB_01a7b150;
          }
        }
        else {
          if ((int)uVar3 < 1) {
            fVar20 = -1.0;
          }
          else {
            lVar14 = *(long *)(unaff_x19 + 0x20);
            if (lVar14 == 0) goto LAB_01a7b088;
            uVar8 = *(uint *)(lVar14 + 0x18);
            iVar15 = 0;
            uVar16 = 0;
            fVar20 = -1.0;
            do {
              if (uVar8 <= uVar16) goto LAB_01a7b084;
              if (0 < (int)unaff_w21) {
                fVar22 = *(float *)(lVar14 + uVar16 * 4 + 0x20);
                uVar2 = *(uint *)(unaff_x20 + 0x18);
                uVar18 = 0;
                fVar21 = fVar20;
                do {
                  uVar1 = iVar15 + uVar18;
                  if (uVar2 <= uVar1) goto LAB_01a7b084;
                  uVar18 = uVar18 + 1;
                  fVar20 = fVar22;
                  if (fVar22 <= fVar21) {
                    fVar20 = fVar21;
                  }
                  *(float *)(unaff_x20 + (long)(int)uVar1 * 4 + 0x20) = fVar22;
                  fVar21 = fVar20;
                } while (unaff_w21 != uVar18);
              }
              uVar16 = uVar16 + 1;
              iVar15 = iVar15 + (unaff_w21 & ((int)unaff_w21 >> 0x1f ^ 0xffffffffU));
            } while (uVar16 != uVar3);
          }
          if (*(long *)(unaff_x19 + 0x18) != 0) {
            *(float *)(*(long *)(unaff_x19 + 0x18) + 0x28) = fVar20;
            return;
          }
        }
      }
    }
  }
LAB_01a7b088:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


