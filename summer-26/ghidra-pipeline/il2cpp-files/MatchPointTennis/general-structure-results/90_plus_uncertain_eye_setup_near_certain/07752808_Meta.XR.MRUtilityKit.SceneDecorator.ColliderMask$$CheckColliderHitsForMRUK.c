/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.ColliderMask$$CheckColliderHitsForMRUK
ENTRY_POINT: 07752808
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 96
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Type propagation algorithm not settling */

void Meta_XR_MRUtilityKit_SceneDecorator_ColliderMask__CheckColliderHitsForMRUK(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  long lVar36;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long lVar37;
  undefined4 unaff_w29;
  undefined4 uStack00000000000000e0;
  int iStack00000000000000e4;
  int iStack00000000000000e8;
  uint uStack00000000000000ec;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0x820));
  FUN_04447ba8(PTR_DAT_09f31aa0);
  FUN_04447ba8(PTR_DAT_09f20d20);
  FUN_04447ba8(PTR_DAT_09f1e5f0);
  FUN_04447ba8(PTR_DAT_09f313f8);
  FUN_04447ba8(PTR_DAT_09f31dd0);
  FUN_04447ba8(PTR_DAT_09f31dd8);
  FUN_04447ba8(PTR_DAT_09f31de0);
  FUN_04447ba8(PTR_DAT_09f31de8);
  FUN_04447ba8(PTR_DAT_09f31df0);
  *(undefined1 *)(unaff_x24 + 0x269) = 1;
  uStack00000000000000e0 = 0;
  iStack00000000000000e4 = 0;
  iStack00000000000000e8 = 0;
  uStack00000000000000ec = 0;
  if ((long *)*unaff_x25 != (long *)0x0) {
    if (*(long *)(*(long *)*unaff_x25 + 0x40) != *(long *)(*(long *)PTR_DAT_09f313f8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_044481e4();
    }
    lVar10 = thunk_FUN_04485360();
    if (unaff_x22 != 0) {
      uVar24 = *(undefined8 *)(lVar10 + 0x70);
      uVar13 = *(undefined8 *)(lVar10 + 0x78);
      uVar11 = *(undefined8 *)(lVar10 + 0x60);
      uVar2 = *(undefined8 *)(lVar10 + 0x68);
      lVar37 = *(long *)(lVar10 + 0x130);
      uVar6 = *(undefined4 *)(unaff_x22 + 0x28);
      uVar25 = *(undefined8 *)(lVar10 + 0x80);
      uVar14 = *(undefined8 *)(lVar10 + 0x88);
      uVar7 = *(undefined4 *)(unaff_x22 + 0x30);
      uVar26 = *(undefined8 *)(lVar10 + 0x90);
      uVar15 = *(undefined8 *)(lVar10 + 0x98);
      uVar27 = *(undefined8 *)(lVar10 + 0xa0);
      uVar16 = *(undefined8 *)(lVar10 + 0xa8);
      uVar28 = *(undefined8 *)(lVar10 + 0xb0);
      uVar17 = *(undefined8 *)(lVar10 + 0xb8);
      uVar29 = *(undefined8 *)(lVar10 + 0xc0);
      uVar18 = *(undefined8 *)(lVar10 + 200);
      uVar30 = *(undefined8 *)(lVar10 + 0xd0);
      uVar19 = *(undefined8 *)(lVar10 + 0xd8);
      uVar31 = *(undefined8 *)(lVar10 + 0xe0);
      uVar20 = *(undefined8 *)(lVar10 + 0xe8);
      uVar32 = *(undefined8 *)(lVar10 + 0xf0);
      uVar21 = *(undefined8 *)(lVar10 + 0xf8);
      uVar33 = *(undefined8 *)(lVar10 + 0x100);
      uVar22 = *(undefined8 *)(lVar10 + 0x108);
      uVar34 = *(undefined8 *)(lVar10 + 0x110);
      uVar23 = *(undefined8 *)(lVar10 + 0x118);
      uVar8 = *(uint *)(unaff_x23 + 8);
      if ((uVar8 & 1) != 0) {
        uVar1 = *(undefined8 *)(lVar10 + 0x50);
        uVar3 = *(undefined8 *)(lVar10 + 0x58);
        uVar5 = *(undefined8 *)(unaff_x23 + 0x50);
        uVar4 = *(undefined8 *)(unaff_x23 + 0x58);
        if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f31aa0);
        }
        FUN_050e15f4(uVar1,uVar3,uVar6,uVar5,uVar4,unaff_w29,uVar7,*(undefined8 *)PTR_DAT_09f32818);
        uVar8 = *(uint *)(unaff_x23 + 8);
      }
      if ((uVar8 >> 1 & 1) != 0) {
        uVar1 = *(undefined8 *)(unaff_x23 + 0x60);
        uVar5 = *(undefined8 *)(unaff_x23 + 0x68);
        if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f31aa0,uVar2);
        }
        FUN_050e15f4(uVar11,uVar2,uVar6,uVar1,uVar5,unaff_w29,uVar7,*(undefined8 *)PTR_DAT_09f32818)
        ;
        uVar8 = *(uint *)(unaff_x23 + 8);
      }
      if ((uVar8 >> 2 & 1) != 0) {
        uVar11 = *(undefined8 *)(unaff_x23 + 0x70);
        uVar2 = *(undefined8 *)(unaff_x23 + 0x78);
        if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_050e16b8(uVar24,uVar13,uVar6,uVar11,uVar2,unaff_w29,uVar7,
                     *(undefined8 *)PTR_DAT_09f32820);
        uVar8 = *(uint *)(unaff_x23 + 8);
      }
      if ((uVar8 >> 4 & 1) != 0) {
        uVar11 = *(undefined8 *)(unaff_x23 + 0x90);
        uVar2 = *(undefined8 *)(unaff_x23 + 0x98);
        if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_050e1530(uVar26,uVar15,uVar6,uVar11,uVar2,unaff_w29,uVar7,
                     *(undefined8 *)PTR_DAT_09f32810);
        uVar8 = *(uint *)(unaff_x23 + 8);
      }
      if ((uVar8 >> 5 & 1) != 0) {
        uVar11 = *(undefined8 *)(unaff_x23 + 0x110);
        uVar2 = *(undefined8 *)(unaff_x23 + 0x118);
        if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_050e146c(uVar34,uVar23,uVar6,uVar11,uVar2,unaff_w29,uVar7,
                     *(undefined8 *)PTR_DAT_09f32808);
        uVar8 = *(uint *)(unaff_x23 + 8);
      }
      if ((uVar8 >> 6 & 1) != 0) {
        uVar11 = *(undefined8 *)(unaff_x23 + 0xa0);
        uVar2 = *(undefined8 *)(unaff_x23 + 0xa8);
        if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_050e1530(uVar27,uVar16,uVar6,uVar11,uVar2,unaff_w29,uVar7,
                     *(undefined8 *)PTR_DAT_09f32810);
        uVar8 = *(uint *)(unaff_x23 + 8);
      }
      if ((uVar8 >> 7 & 1) != 0) {
        uVar11 = *(undefined8 *)(unaff_x23 + 0xb0);
        uVar2 = *(undefined8 *)(unaff_x23 + 0xb8);
        if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_050e1530(uVar28,uVar17,uVar6,uVar11,uVar2,unaff_w29,uVar7,
                     *(undefined8 *)PTR_DAT_09f32810);
        uVar8 = *(uint *)(unaff_x23 + 8);
      }
      if ((uVar8 >> 8 & 1) != 0) {
        uVar11 = *(undefined8 *)(unaff_x23 + 0xc0);
        uVar2 = *(undefined8 *)(unaff_x23 + 200);
        if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_050e1530(uVar29,uVar18,uVar6,uVar11,uVar2,unaff_w29,uVar7,
                     *(undefined8 *)PTR_DAT_09f32810);
        uVar8 = *(uint *)(unaff_x23 + 8);
      }
      if ((uVar8 >> 9 & 1) != 0) {
        uVar11 = *(undefined8 *)(unaff_x23 + 0xd0);
        uVar2 = *(undefined8 *)(unaff_x23 + 0xd8);
        if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_050e1530(uVar30,uVar19,uVar6,uVar11,uVar2,unaff_w29,uVar7,
                     *(undefined8 *)PTR_DAT_09f32810);
        uVar8 = *(uint *)(unaff_x23 + 8);
      }
      if ((uVar8 >> 10 & 1) != 0) {
        uVar11 = *(undefined8 *)(unaff_x23 + 0xe0);
        uVar2 = *(undefined8 *)(unaff_x23 + 0xe8);
        if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_050e1530(uVar31,uVar20,uVar6,uVar11,uVar2,unaff_w29,uVar7,
                     *(undefined8 *)PTR_DAT_09f32810);
        uVar8 = *(uint *)(unaff_x23 + 8);
      }
      if ((uVar8 >> 0xb & 1) != 0) {
        uVar11 = *(undefined8 *)(unaff_x23 + 0xf0);
        uVar2 = *(undefined8 *)(unaff_x23 + 0xf8);
        if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_050e1530(uVar32,uVar21,uVar6,uVar11,uVar2,unaff_w29,uVar7,
                     *(undefined8 *)PTR_DAT_09f32810);
        uVar8 = *(uint *)(unaff_x23 + 8);
      }
      if ((uVar8 >> 0xc & 1) != 0) {
        uVar11 = *(undefined8 *)(unaff_x23 + 0x100);
        uVar2 = *(undefined8 *)(unaff_x23 + 0x108);
        if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_050e1530(uVar33,uVar22,uVar6,uVar11,uVar2,unaff_w29,uVar7,
                     *(undefined8 *)PTR_DAT_09f32810);
        uVar8 = *(uint *)(unaff_x23 + 8);
      }
      if ((uVar8 >> 3 & 1) != 0) {
        uVar11 = *(undefined8 *)(unaff_x23 + 0x80);
        uVar2 = *(undefined8 *)(unaff_x23 + 0x88);
        if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_050e13a8(uVar25,uVar14,uVar6,uVar11,uVar2,unaff_w29,uVar7,
                     *(undefined8 *)PTR_DAT_09f32800);
      }
      puVar9 = PTR_DAT_09f31348;
      uStack00000000000000ec = 0;
      lVar10 = *(long *)(unaff_x23 + 0x130);
      if (lVar10 != 0) {
        do {
          if (*(int *)(lVar10 + 0x18) <= (int)uStack00000000000000ec) {
            return;
          }
          if (lVar37 == 0) break;
          if (*(uint *)(lVar37 + 0x18) <= uStack00000000000000ec) {
LAB_0775315c:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          lVar10 = (long)(int)uStack00000000000000ec;
          lVar35 = *(long *)(lVar37 + lVar10 * 8 + 0x20);
          if ((lVar35 == 0) || (lVar36 = *(long *)(unaff_x22 + 0x70), lVar36 == 0)) break;
          if (*(uint *)(lVar36 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
          iStack00000000000000e8 = *(int *)(lVar36 + lVar10 * 4 + 0x20);
          lVar36 = *(long *)(lVar35 + 0x10);
          lVar35 = *(long *)(unaff_x22 + 0x78);
          if (lVar35 == 0) break;
          if (*(uint *)(lVar35 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
          iStack00000000000000e4 = *(int *)(lVar35 + lVar10 * 4 + 0x20);
          if (3 < unaff_w19) {
            lVar10 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,10);
            if (lVar10 == 0) break;
            if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0775315c;
            *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_09f31dd8;
            thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x20));
            uVar11 = FUN_07a3b850((long)&stack0x000000e8 + 4,0);
            if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_0775315c;
            *(undefined8 *)(lVar10 + 0x28) = uVar11;
            thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x28),uVar11);
            if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_0775315c;
            *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_09f31dd0;
            thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x30));
            uVar11 = FUN_07a3b850(&stack0x000000e8,0);
            if (*(uint *)(lVar10 + 0x18) < 4) goto LAB_0775315c;
            *(undefined8 *)(lVar10 + 0x38) = uVar11;
            thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x38),uVar11);
            if (*(uint *)(lVar10 + 0x18) < 5) goto LAB_0775315c;
            *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)PTR_DAT_09f31df0;
            thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x40));
            uVar11 = FUN_07a3b850((long)&stack0x000000e0 + 4,0);
            if (*(uint *)(lVar10 + 0x18) < 6) goto LAB_0775315c;
            *(undefined8 *)(lVar10 + 0x48) = uVar11;
            thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x48),uVar11);
            if (*(uint *)(lVar10 + 0x18) < 7) goto LAB_0775315c;
            *(undefined8 *)(lVar10 + 0x50) = *(undefined8 *)PTR_DAT_09f31de8;
            thunk_FUN_044bb4b4();
            if (*(long *)(unaff_x23 + 0x130) == 0) break;
            uStack00000000000000e0 =
                 (undefined4)*(undefined8 *)(*(long *)(unaff_x23 + 0x130) + 0x18);
            uVar11 = FUN_07a3b850(&stack0x000000e0,0);
            if (*(uint *)(lVar10 + 0x18) < 8) goto LAB_0775315c;
            *(undefined8 *)(lVar10 + 0x58) = uVar11;
            thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x58),uVar11);
            if (*(uint *)(lVar10 + 0x18) < 9) goto LAB_0775315c;
            *(undefined8 *)(lVar10 + 0x60) = *(undefined8 *)PTR_DAT_09f31de0;
            thunk_FUN_044bb4b4();
            if (unaff_x20 == 0) break;
            uStack00000000000000e0 = (undefined4)*(undefined8 *)(unaff_x20 + 0x18);
            uVar11 = FUN_07a3b850(&stack0x000000e0,0);
            if (*(uint *)(lVar10 + 0x18) < 10) goto LAB_0775315c;
            *(undefined8 *)(lVar10 + 0x68) = uVar11;
            thunk_FUN_044bb4b4();
            uVar11 = FUN_078b57fc(lVar10,0);
            plVar12 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
            lVar10 = thunk_FUN_04484e3c(*(undefined8 *)puVar9,&stack0x000000dc);
            if (plVar12 == (long *)0x0) break;
            if ((lVar10 != 0) &&
               (lVar35 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar35 == 0))
            {
              uVar11 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar11,0);
            }
            if ((int)plVar12[3] == 0) goto LAB_0775315c;
            plVar12[4] = lVar10;
            thunk_FUN_044bb4b4(plVar12 + 4,lVar10);
            FUN_0771ec00(uVar11,plVar12,0);
          }
          if (iStack00000000000000e8 < iStack00000000000000e4 + iStack00000000000000e8) {
            if (lVar36 == 0) break;
            uVar8 = *(uint *)(lVar36 + 0x18);
            lVar10 = (long)iStack00000000000000e8;
            do {
              if (uVar8 <= (uint)lVar10) goto LAB_0775315c;
              *(int *)(lVar36 + 0x20 + lVar10 * 4) =
                   *(int *)(lVar36 + 0x20 + lVar10 * 4) - unaff_w21;
              lVar10 = lVar10 + 1;
            } while (lVar10 < iStack00000000000000e4 + iStack00000000000000e8);
          }
          lVar10 = *(long *)(unaff_x23 + 0x130);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
          lVar10 = *(long *)(lVar10 + (long)(int)uStack00000000000000ec * 8 + 0x20);
          if ((lVar10 == 0) || (unaff_x20 == 0)) break;
          if (*(uint *)(unaff_x20 + 0x18) <= uStack00000000000000ec) goto LAB_0775315c;
          FUN_07a612b4(lVar36,iStack00000000000000e8,*(undefined8 *)(lVar10 + 0x10),
                       *(undefined4 *)(unaff_x20 + (long)(int)uStack00000000000000ec * 4 + 0x20),
                       iStack00000000000000e4,0);
          uStack00000000000000ec = uStack00000000000000ec + 1;
          lVar10 = *(long *)(unaff_x23 + 0x130);
          if (lVar10 == 0) break;
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


