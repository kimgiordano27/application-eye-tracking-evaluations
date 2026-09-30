/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$Update
ENTRY_POINT: 0771b9c8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__Update(long param_1,ulong param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long lVar12;
  int iVar13;
  undefined8 *unaff_x25;
  undefined8 uVar14;
  undefined8 *unaff_x26;
  uint uVar15;
  ulong uVar16;
  undefined8 *unaff_x28;
  long *unaff_x29;
  uint uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  while( true ) {
    uVar4 = FUN_05badb74(param_1,param_2,param_3);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*unaff_x29);
    }
    uVar5 = FUN_09531730(uVar4,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xb8) == 0) goto LAB_0771c0d0;
      uVar4 = FUN_05badb74(*(long *)(unaff_x19 + 0xb8),unaff_x21 & 0xffffffff,*unaff_x26);
      lVar6 = FUN_0775e914(uVar4,0);
      if (lVar6 == 0) goto LAB_0771c0d0;
      if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
        uVar5 = 0;
        uVar9 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
        do {
          if (uVar9 <= uVar5) goto LAB_0771c0cc;
          uVar4 = *(undefined8 *)(lVar6 + 0x20 + uVar5 * 8);
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar9 = FUN_09531730(uVar4,0,0);
          if ((uVar9 & 1) != 0) {
            if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_0771c0cc;
            if (unaff_x20 == 0) goto LAB_0771c0d0;
            FUN_05672a08();
          }
          uVar9 = (ulong)*(uint *)(lVar6 + 0x18);
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)(int)*(uint *)(lVar6 + 0x18));
      }
    }
    param_1 = *(long *)(unaff_x19 + 0xb8);
    uVar15 = (int)unaff_x21 + 1;
    param_2 = (ulong)uVar15;
    if (param_1 == 0) goto LAB_0771c0d0;
    if (*(int *)(param_1 + 0x18) <= (int)uVar15) break;
    param_3 = *unaff_x26;
    unaff_x21 = param_2;
  }
  if (*(long *)(unaff_x19 + 0xa0) != 0) {
    if (*(int *)(*(long *)(unaff_x19 + 0xa0) + 0x18) < 1) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c6b48(*(undefined8 *)PTR_DAT_09f30e20,0);
    }
    lVar6 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f30888);
    FUN_0567183c(lVar6,*unaff_x25);
    lVar10 = *(long *)(unaff_x19 + 0xa0);
    if (lVar10 != 0) {
      uVar5 = 0;
      while( true ) {
        uVar15 = *(uint *)(lVar10 + 0x18);
        uVar9 = (ulong)uVar15;
        if ((long)(int)uVar15 <= (long)uVar5) break;
        if (uVar9 <= uVar5) {
LAB_0771c0cc:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        uVar2 = uVar5 + 1;
        bVar1 = (int)uVar2 < (int)uVar15;
        uVar16 = uVar2 & 0xffffffff;
        while( true ) {
          lVar12 = *(long *)(lVar10 + uVar5 * 8 + 0x20);
          if (lVar12 == 0) goto LAB_0771c0d0;
          uVar4 = *(undefined8 *)(lVar12 + 0x10);
          if (!bVar1) break;
          uVar15 = (uint)uVar16;
          if ((uint)uVar9 <= uVar15) goto LAB_0771c0cc;
          lVar10 = *(long *)(lVar10 + (long)(int)uVar15 * 8 + 0x20);
          if (lVar10 == 0) goto LAB_0771c0d0;
          uVar14 = *(undefined8 *)(lVar10 + 0x10);
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar9 = FUN_0952c404(uVar4,uVar14,0);
          puVar3 = PTR_DAT_09f1e5b8;
          if ((uVar9 & 1) != 0) {
            uStack000000000000001c = (undefined4)uVar5;
            uVar4 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),
                                       (long)&stack0x00000018 + 4);
            uStack0000000000000018 = uVar15;
            uVar14 = thunk_FUN_04484e3c(*(undefined8 *)(puVar3 + 0x48),&stack0x00000018);
            uVar4 = FUN_078b5afc(*(undefined8 *)PTR_DAT_09f30e40,uVar4,uVar14,0);
            goto LAB_0771bf5c;
          }
          lVar10 = *(long *)(unaff_x19 + 0xa0);
          if (lVar10 == 0) goto LAB_0771c0d0;
          uVar9 = *(ulong *)(lVar10 + 0x18);
          uVar16 = (ulong)(uVar15 + 1);
          bVar1 = (int)(uVar15 + 1) < (int)uVar9;
          if ((uVar9 & 0xffffffff) <= uVar5) goto LAB_0771c0cc;
        }
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar5 = FUN_0952c404(uVar4,0,0);
        if ((uVar5 & 1) != 0) {
          puVar11 = (undefined8 *)PTR_DAT_09f30e48;
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
            puVar11 = (undefined8 *)PTR_DAT_09f30e48;
          }
LAB_0771bf10:
          uVar4 = *puVar11;
FUN_0771bf80:
          FUN_094c6b48(uVar4,0);
          return 0;
        }
        if (*(long *)(lVar12 + 0x10) == 0) goto LAB_0771c0d0;
        plVar7 = (long *)FUN_094e2354(*(long *)(lVar12 + 0x10),0);
        lVar10 = *(long *)(lVar12 + 0x20);
        if (lVar10 == 0) goto LAB_0771c0d0;
        iVar13 = 0;
        while (iVar13 < *(int *)(lVar10 + 0x18)) {
          uVar4 = FUN_05badb74(lVar10,iVar13,*(undefined8 *)PTR_DAT_09f30930);
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*unaff_x29);
          }
          uVar5 = FUN_0952c404(uVar4,0,0);
          if ((uVar5 & 1) != 0) {
            puVar11 = (undefined8 *)PTR_DAT_09f30e58;
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
              puVar11 = (undefined8 *)PTR_DAT_09f30e58;
            }
            goto LAB_0771bf10;
          }
          if ((*(long *)(lVar12 + 0x20) == 0) ||
             (lVar10 = FUN_05badb74(*(long *)(lVar12 + 0x20),iVar13,*(undefined8 *)PTR_DAT_09f30930)
             , lVar10 == 0)) goto LAB_0771c0d0;
          uVar4 = FUN_094e2354(lVar10,0);
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*unaff_x29);
          }
          uVar5 = FUN_09531730(plVar7,uVar4,0);
          if ((uVar5 & 1) != 0) {
            lVar10 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,5);
            if (lVar10 == 0) goto LAB_0771c0d0;
            if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0771c0cc;
            *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_09f30e60;
            thunk_FUN_044bb4b4();
            if (*(long *)(lVar12 + 0x20) == 0) goto LAB_0771c0d0;
            plVar8 = (long *)FUN_05badb74(*(long *)(lVar12 + 0x20),iVar13,
                                          *(undefined8 *)PTR_DAT_09f30930);
            if (plVar8 == (long *)0x0) {
              uVar4 = 0;
            }
            else {
              if (plVar8 == (long *)0x0) goto LAB_0771c0d0;
              uVar4 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
            }
            if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_0771c0cc;
            *(undefined8 *)(lVar10 + 0x28) = uVar4;
            thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x28));
            if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_0771c0cc;
            *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_09f30e68;
            thunk_FUN_044bb4b4();
            if (plVar7 == (long *)0x0) {
              uVar4 = 0;
            }
            else {
              if (plVar7 == (long *)0x0) goto LAB_0771c0d0;
              uVar4 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
            }
            if (*(uint *)(lVar10 + 0x18) < 4) goto LAB_0771c0cc;
            *(undefined8 *)(lVar10 + 0x38) = uVar4;
            thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x38));
            if (*(uint *)(lVar10 + 0x18) < 5) goto LAB_0771c0cc;
            *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)PTR_DAT_09f30e30;
            thunk_FUN_044bb4b4();
            uVar4 = FUN_078b57fc(lVar10,0);
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
            }
            FUN_094c33b0(uVar4,0);
          }
          if ((*(long *)(lVar12 + 0x20) == 0) ||
             (uVar4 = FUN_05badb74(*(long *)(lVar12 + 0x20),iVar13,*(undefined8 *)PTR_DAT_09f30930),
             lVar6 == 0)) goto LAB_0771c0d0;
          uVar5 = System_Array_InternalEnumerator<KVPair<ConnectionToken,_ConnectionId>>__System_Collections_IEnumerator_get_Current
                            (lVar6,uVar4,*(undefined8 *)PTR_DAT_09f30940);
          if (*(long *)(lVar12 + 0x20) == 0) goto LAB_0771c0d0;
          plVar8 = (long *)FUN_05badb74(*(long *)(lVar12 + 0x20),iVar13,
                                        *(undefined8 *)PTR_DAT_09f30930);
          if ((uVar5 & 1) != 0) {
            uVar4 = *(undefined8 *)PTR_DAT_09f30e38;
            if (plVar8 == (long *)0x0) {
              uVar14 = 0;
            }
            else {
              uVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
            }
            uVar4 = FUN_078b4f58(uVar4,uVar14,*(undefined8 *)PTR_DAT_09f30e50,0);
            goto LAB_0771bf5c;
          }
          FUN_05672a08(lVar6,plVar8,*unaff_x28);
          lVar10 = *(long *)(lVar12 + 0x20);
          iVar13 = iVar13 + 1;
          if (lVar10 == 0) goto LAB_0771c0d0;
        }
        lVar10 = *(long *)(unaff_x19 + 0xa0);
        uVar5 = uVar2;
        if (lVar10 == 0) goto LAB_0771c0d0;
      }
      if (unaff_x20 != 0) {
        uVar5 = FUN_056734d8();
        if ((uVar5 & 1) != 0) {
          if (lVar6 == 0) goto LAB_0771c0d0;
          uVar4 = FUN_05672f18(lVar6);
          uVar4 = FUN_0771b620(uVar4,lVar6);
          uVar4 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30e28,uVar4,0);
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
          }
          FUN_094c33b0(uVar4,0);
        }
        if ((*(long *)(unaff_x19 + 0xa0) != 0) &&
           (*(long *)(*(long *)(unaff_x19 + 0xa0) + 0x18) != 0)) {
          if (lVar6 == 0) goto LAB_0771c0d0;
          uVar5 = FUN_056734d8(lVar6);
          if ((uVar5 & 1) != 0) {
            FUN_05672f18();
            uVar4 = FUN_0771b620();
            uVar4 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30e18,uVar4,0);
LAB_0771bf5c:
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
            }
            goto FUN_0771bf80;
          }
        }
        return 1;
      }
    }
  }
LAB_0771c0d0:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


