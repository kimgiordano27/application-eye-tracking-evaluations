/*
FUNCTION_NAME: TMPro.TextMeshPro$$SetOutlineThickness
ENTRY_POINT: 03d49d80
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03d4a270) */
/* WARNING: Removing unreachable block (ram,0x03d4a15c) */
/* WARNING: Removing unreachable block (ram,0x03d4a27c) */
/* WARNING: Removing unreachable block (ram,0x03d4a164) */
/* WARNING: Removing unreachable block (ram,0x03d4a278) */
/* WARNING: Removing unreachable block (ram,0x03d4a17c) */
/* WARNING: Removing unreachable block (ram,0x03d4a190) */

void TMPro_TextMeshPro__SetOutlineThickness
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],long param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  undefined8 uVar14;
  long lVar15;
  undefined8 *unaff_x25;
  undefined8 uVar16;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  
  uVar20 = param_4._4_4_;
  fVar19 = param_4._0_4_;
  uVar3 = param_3._4_4_;
  uVar2 = param_3._0_4_;
  lVar5 = FUN_022c60a8();
  if (lVar5 != 0) {
    FUN_0407c270(lVar5,0);
    uVar14 = CONCAT44(uVar20,fVar19);
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar17 = (float)FUN_0356bd58(CONCAT44(uVar3,uVar2),uVar14,0);
    fVar21 = (float)uVar14;
    uVar2 = FUN_040469a0(0);
    uVar3 = FUN_04046978(0);
    iVar4 = FUN_0356bd30(uVar2,uVar3,0);
    fVar18 = (float)FUN_04046aa4(0);
    if (param_5 != 0) {
      fVar17 = fVar17 / (float)iVar4;
      fVar21 = fVar17 * -fVar21;
      plVar6 = (long *)FUN_0265d924(param_5,*(undefined8 *)PTR_DAT_04574cf8);
      do {
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x28) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03d49ea0;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x28,0);
LAB_03d49ea0:
        uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar11 & 1) == 0) {
          if (plVar6 == (long *)0x0) goto LAB_03d4a200;
          lVar5 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar11 == 0) goto LAB_03d4a1d8;
          piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_03d4a1c0;
        }
        lVar5 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x29) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03d49efc;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x29,0);
LAB_03d49efc:
        lVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar11 = FUN_03d000b0(lVar5,0);
        if ((uVar11 & 1) == 0) {
          lVar9 = *unaff_x26;
          uVar14 = *(undefined8 *)(lVar5 + 0x28);
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar9);
            lVar9 = *unaff_x26;
          }
          lVar15 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
          if (lVar15 == 0) {
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(lVar9);
              lVar9 = *unaff_x26;
            }
            uVar16 = **(undefined8 **)(lVar9 + 0xb8);
            lVar15 = thunk_FUN_01f117cc(*unaff_x27);
            FUN_02e6c0a0(lVar15,uVar16,*(undefined8 *)PTR_DAT_04574d00,0);
            plVar8 = (long *)(*(long *)(*unaff_x26 + 0xb8) + 8);
            *plVar8 = lVar15;
            thunk_FUN_01f51358(plVar8,lVar15);
            unaff_x25 = (undefined8 *)PTR_DAT_04574c98;
          }
          iVar4 = FUN_022f3de4(uVar14,lVar15,*unaff_x25);
          if (iVar4 != 0) {
            uVar16 = *(undefined8 *)(unaff_x19 + 0x30);
            uVar14 = FUN_04070398();
            if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            lVar9 = FUN_023aa97c(uVar16,uVar14,0,*(undefined8 *)PTR_DAT_04574cf0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar9 = FUN_040703d4(lVar9,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_040767ac(lVar9,*(undefined8 *)(lVar5 + 0x18),0);
            lVar15 = FUN_023361c8(lVar9,*(undefined8 *)StringLiteral_1244);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_0407c5d4(fVar18 * fVar17 + 5.0,fVar21 + 5.0,lVar15,0);
            FUN_0407d05c(fVar19 * fVar17 + fVar21 + fVar21,lVar15,1,0);
            lVar15 = FUN_023361c8(lVar9,*(undefined8 *)PTR_DAT_04574cc8);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_03d4a450(lVar15,lVar5);
            *(long *)(lVar15 + 0x38) = unaff_x19;
            thunk_FUN_01f51358();
            lVar5 = *(long *)(unaff_x19 + 0x40);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar10 = *(long *)(lVar5 + 0x10);
            lVar12 = *(long *)PTR_DAT_04574cd8;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              plVar8 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
              *plVar8 = lVar15;
              thunk_FUN_01f51358(plVar8,lVar15);
            }
            else {
              FUN_030f2bb4(lVar5,lVar15,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            lVar5 = FUN_023361c8(lVar9,*(undefined8 *)PTR_DAT_04574cc0);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_03d4a498();
            uVar11 = FUN_04073094(0,0,0);
            if ((uVar11 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar13 = piVar13 + 4;
    if (uVar11 == 0) break;
LAB_03d4a1c0:
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03d4a1f4;
    }
  }
LAB_03d4a1d8:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03d4a1f4:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_03d4a200:
  FUN_03d4a950();
  return;
}


