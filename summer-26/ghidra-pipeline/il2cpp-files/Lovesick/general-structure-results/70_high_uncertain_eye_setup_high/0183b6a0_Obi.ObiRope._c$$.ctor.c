/*
FUNCTION_NAME: Obi.ObiRope.<>c$$.ctor
ENTRY_POINT: 0183b6a0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0183b9cc) */

byte Obi_ObiRope_<>c___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  long unaff_x21;
  long *plVar10;
  int iVar11;
  int iVar12;
  
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<EventDescriptor>__ctor__);
  thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
  thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
  *(undefined1 *)(unaff_x21 + 0x549) = 1;
  puVar1 = StringLiteral_7740;
  if (unaff_x20 != 0) {
    plVar10 = *(long **)(unaff_x20 + 0x80);
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_7740) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 4) * 0x10 + 0x138);
            goto LAB_0183b730;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(plVar10,*(long *)StringLiteral_7740,4);
LAB_0183b730:
      uVar8 = (*(code *)*puVar6)(plVar10);
      if ((uVar8 & 1) != 0) {
        return 1;
      }
    }
    plVar10 = *(long **)(unaff_x20 + 0x88);
    if (plVar10 == (long *)0x0) {
      bVar5 = 0;
    }
    else {
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_0183b7ac;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar1,2);
LAB_0183b7ac:
      plVar10 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
      if (plVar10 == (long *)0x0) goto LAB_0183b9c4;
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet<Vector3Int>_GetEnumerator__) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto FUN_0183b814;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_00d59724(plVar10,*(long *)
                                     Method_System_Collections_Generic_HashSet<Vector3Int>_GetEnumerator__
                            ,0);
FUN_0183b814:
      puVar4 = StringLiteral_10310;
      plVar10 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
      puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
      puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      puVar1 = Method_System_Collections_Generic_List<EventDescriptor>__ctor__;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0183b894;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar2,0);
LAB_0183b894:
        uVar8 = (*(code *)*puVar6)(plVar10,puVar6[1]);
        if ((uVar8 & 1) == 0) {
          bVar5 = 0;
          iVar12 = 3;
          iVar11 = 3;
          goto joined_r0x0183b944;
        }
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0183b8f0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar1,0);
LAB_0183b8f0:
        (*(code *)*puVar6)(plVar10,puVar6[1]);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_0201fbe8();
      } while ((uVar8 & 1) == 0);
      bVar5 = 1;
      iVar12 = 6;
      iVar11 = 6;
joined_r0x0183b944:
      if (plVar10 != (long *)0x0) {
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0183b994;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar4,0);
LAB_0183b994:
        (*(code *)*puVar6)(plVar10,puVar6[1]);
        iVar11 = iVar12;
      }
      bVar5 = iVar11 == 6 & bVar5;
    }
    return bVar5;
  }
LAB_0183b9c4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


