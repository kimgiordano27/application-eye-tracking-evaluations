/*
FUNCTION_NAME: OVA.WisteriaX.Entities.ColliderValueType$$.ctor
ENTRY_POINT: 08c520a8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


long * OVA_WisteriaX_Entities_ColliderValueType___ctor(void)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long *plVar10;
  long *unaff_x23;
  uint uVar11;
  
  *(undefined1 *)(unaff_x20 + 0xbea) = 1;
  lVar3 = *unaff_x23;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar3 = *unaff_x23;
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    uVar4 = FUN_06efc9cc();
    if ((uVar4 & 1) == 0) {
      if ((unaff_x19 != (long *)0x0) &&
         (plVar5 = (long *)thunk_FUN_0408781c(), plVar5 != (long *)0x0)) {
        lVar3 = (**(code **)(*plVar5 + 0x918))(plVar5,*(undefined8 *)(*plVar5 + 0x920));
        if (lVar3 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (0 < (int)uVar1) {
            uVar11 = 0;
            do {
              if (uVar1 <= uVar11) {
OVA_WisteriaX_Entities_Messages_AudioSphereStateMessage__Deserialize:
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar5 = *(long **)(lVar3 + (long)(int)uVar11 * 8 + 0x20);
              if (plVar5 == (long *)0x0) goto LAB_08c5243c;
              uVar4 = (**(code **)(*plVar5 + 0x3d8))(plVar5,*(undefined8 *)(*plVar5 + 0x3e0));
              if ((uVar4 & 1) != 0) {
                lVar6 = *unaff_x23;
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar6 = *unaff_x23;
                }
                plVar10 = *(long **)(*(long *)(lVar6 + 0xb8) + 0x10);
                uVar7 = (**(code **)(*plVar5 + 0x458))(plVar5,*(undefined8 *)(*plVar5 + 0x460));
                if (plVar10 == (long *)0x0) goto LAB_08c5243c;
                uVar4 = (**(code **)(*plVar10 + 0x2b8))
                                  (plVar10,uVar7,*(undefined8 *)(*plVar10 + 0x2c0));
                if ((uVar4 & 1) != 0) {
                  lVar3 = (**(code **)(*plVar5 + 0x478))(plVar5,*(undefined8 *)(*plVar5 + 0x480));
                  if (lVar3 == 0) goto LAB_08c5243c;
                  if (*(int *)(lVar3 + 0x18) == 0)
                  goto OVA_WisteriaX_Entities_Messages_AudioSphereStateMessage__Deserialize;
                  uVar7 = *(undefined8 *)(lVar3 + 0x20);
                  goto OVA_WisteriaX_Entities_PrimitivePlaneAction___ctor;
                }
              }
              uVar1 = *(uint *)(lVar3 + 0x18);
              uVar11 = uVar11 + 1;
            } while ((int)uVar11 < (int)uVar1);
          }
          uVar7 = 0;
OVA_WisteriaX_Entities_PrimitivePlaneAction___ctor:
          if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar4 = FUN_07692be0(uVar7,0,0);
          if ((uVar4 & 1) == 0) {
            plVar5 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09351c18);
            FUN_08c52444();
            if (plVar5 == (long *)0x0) goto LAB_08c5243c;
          }
          else {
            lVar3 = FUN_076a477c(uVar7,0);
            if (lVar3 == 0) goto LAB_08c5243c;
            uVar7 = *(undefined8 *)PTR_DAT_092b7f00;
            plVar5 = (long *)thunk_FUN_040b4e00(lVar3,uVar7);
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077bb0(lVar3,uVar7);
            }
          }
          lVar3 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092b7f00) {
                puVar8 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_08c522f8;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar8 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_092b7f00,0);
LAB_08c522f8:
          (*(code *)*puVar8)(plVar5);
          lVar3 = *unaff_x19;
          bVar2 = *(byte *)(*(long *)PTR_DAT_092b9bc8 + 0x130);
          if ((*(byte *)(lVar3 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_092b9bc8
             )) {
            bVar2 = *(byte *)(*(long *)PTR_DAT_092b76c0 + 0x130);
            if ((bVar2 <= *(byte *)(lVar3 + 0x130)) &&
               (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar2 * 8 + -8) ==
                *(long *)PTR_DAT_092b76c0)) {
              uVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bc130);
              FUN_055f6514(uVar7,0,*(undefined8 *)PTR_DAT_09351c38,0);
              FUN_04f2bcfc();
            }
          }
          else {
            uVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09346bf8);
            FUN_06e5b700(uVar7,0,*(undefined8 *)PTR_DAT_09351c40,0);
            FUN_08c524cc();
          }
          lVar3 = *unaff_x23;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar3 = *unaff_x23;
          }
          if (**(long **)(lVar3 + 0xb8) != 0) {
            FUN_06efc7c4();
            return plVar5;
          }
        }
      }
    }
    else {
      lVar3 = *unaff_x23;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar3 = *unaff_x23;
      }
      if (**(long **)(lVar3 + 0xb8) != 0) {
        plVar5 = (long *)FUN_06efc758();
        return plVar5;
      }
    }
  }
LAB_08c5243c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


