/*
FUNCTION_NAME: MessagePack.Formatters.StaticNullableFormatter<Vector4>$$Serialize
ENTRY_POINT: 05f78fcc
PROGRAM: m3ar-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void MessagePack_Formatters_StaticNullableFormatter<Vector4>__Serialize(void)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar9;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 uVar10;
  long lVar11;
  
  FUN_0403162c(PTR_DAT_08f8c308);
  *(undefined1 *)(unaff_x23 + 0x28e) = 1;
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8))();
  lVar6 = *(long *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x48) = unaff_x22;
  *(long **)(unaff_x20 + 0x18) = unaff_x21;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0406aaec();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  bVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18))();
  *(byte *)(unaff_x20 + 0x20) = bVar2 & 1;
  puVar1 = PTR_DAT_08f8c2b0;
  if (unaff_x21 != (long *)0x0) {
    lVar6 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f8c2b0) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
          goto LAB_05f790a0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20();
LAB_05f790a0:
    (*(code *)*puVar3)();
    if (unaff_x20 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28))();
      plVar9 = *(long **)(unaff_x20 + 0x18);
      if (plVar9 != (long *)0x0) {
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_05f79124;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)puVar1,1);
LAB_05f79124:
        bVar2 = (*(code *)*puVar3)(plVar9,puVar3[1]);
        uVar7 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30))()
        ;
        if ((uVar7 & 1) != 0) {
          lVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38))
                            ();
          if (lVar6 == 0) goto LAB_05f7954c;
          bVar2 = bVar2 | *(char *)(lVar6 + 0x10) != '\0';
        }
        *(byte *)(unaff_x20 + 0x50) = bVar2 & 1;
        if (*(long **)(unaff_x20 + 0x18) != (long *)0x0) {
          lVar6 = **(long **)(unaff_x20 + 0x18);
          if (lVar6 == *(long *)PTR_DAT_08f8c2d8) {
            thunk_FUN_0406e000();
            return;
          }
          if (lVar6 == *(long *)PTR_DAT_08f8c308) {
            puVar3 = (undefined8 *)thunk_FUN_0406e000();
            plVar9 = (long *)*puVar3;
            if (*(char *)(unaff_x20 + 0x20) == '\0') {
              if (plVar9 == (long *)0x0) goto LAB_05f7954c;
              uVar4 = (**(code **)(*plVar9 + 0x2d8))(plVar9,1,*(undefined8 *)(*plVar9 + 0x2e0));
              puVar1 = PTR_DAT_08f65618;
              uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
              if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_0408f364(*(long *)(PTR_DAT_08f65618 + 0xe0));
              }
              uVar10 = FUN_074f3c94(uVar10,0);
              lVar6 = FUN_0752e52c(uVar10,uVar4,0);
              lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68);
              if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = FUN_0406aaec(lVar11);
              }
              if (lVar6 == 0) {
                lVar5 = 0;
              }
              else {
                lVar5 = thunk_FUN_0406ddbc(lVar6,lVar11);
                if (lVar5 == 0) goto LAB_05f79550;
              }
              lVar11 = *(long *)(unaff_x19 + 0x20);
              *(long *)(unaff_x20 + 0x38) = lVar5;
              lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x68);
              if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = FUN_0406aaec(lVar11);
              }
              if ((lVar6 != 0) && (lVar5 = thunk_FUN_0406ddbc(lVar6,lVar11), lVar5 == 0))
              goto LAB_05f79550;
              if ((bVar2 & 1) != 0) {
                return;
              }
              uVar4 = (**(code **)(*plVar9 + 0x308))(plVar9,1,*(undefined8 *)(*plVar9 + 0x310));
              uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70);
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_0408f364(*(long *)(puVar1 + 0xe0));
              }
              uVar10 = FUN_074f3c94(uVar10,0);
              lVar6 = FUN_0752e52c(uVar10,uVar4,0);
              lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78);
              if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = FUN_0406aaec(lVar11);
              }
              if (lVar6 == 0) {
                lVar5 = 0;
              }
              else {
                lVar5 = thunk_FUN_0406ddbc(lVar6,lVar11);
                if (lVar5 == 0) goto FUN_05f794dc;
              }
              lVar11 = *(long *)(unaff_x19 + 0x20);
              *(long *)(unaff_x20 + 0x40) = lVar5;
              lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x78);
            }
            else {
              if (plVar9 == (long *)0x0) goto LAB_05f7954c;
              uVar4 = (**(code **)(*plVar9 + 0x2d8))(plVar9,1,*(undefined8 *)(*plVar9 + 0x2e0));
              puVar1 = PTR_DAT_08f65618;
              uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x40);
              if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_0408f364(*(long *)(PTR_DAT_08f65618 + 0xe0));
              }
              uVar10 = FUN_074f3c94(uVar10,0);
              lVar6 = FUN_0752e52c(uVar10,uVar4,0);
              lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
              if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = FUN_0406aaec(lVar11);
              }
              if (lVar6 == 0) {
                lVar5 = 0;
              }
              else {
                lVar5 = thunk_FUN_0406ddbc(lVar6,lVar11);
                if (lVar5 == 0) goto LAB_05f79550;
              }
              lVar11 = *(long *)(unaff_x19 + 0x20);
              *(long *)(unaff_x20 + 0x28) = lVar5;
              lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x48);
              if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = FUN_0406aaec(lVar11);
              }
              if ((lVar6 != 0) && (lVar5 = thunk_FUN_0406ddbc(lVar6,lVar11), lVar5 == 0)) {
LAB_05f79550:
                    /* WARNING: Subroutine does not return */
                FUN_04031c0c(lVar6,lVar11);
              }
              if ((bVar2 & 1) != 0) {
                return;
              }
              uVar4 = (**(code **)(*plVar9 + 0x308))(plVar9,1,*(undefined8 *)(*plVar9 + 0x310));
              uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50);
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_0408f364(*(long *)(puVar1 + 0xe0));
              }
              uVar10 = FUN_074f3c94(uVar10,0);
              lVar6 = FUN_0752e52c(uVar10,uVar4,0);
              lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
              if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = FUN_0406aaec(lVar11);
              }
              if (lVar6 == 0) {
                lVar5 = 0;
              }
              else {
                lVar5 = thunk_FUN_0406ddbc(lVar6,lVar11);
                if (lVar5 == 0) {
FUN_05f794dc:
                    /* WARNING: Subroutine does not return */
                  FUN_04031c0c(lVar6,lVar11);
                }
              }
              lVar11 = *(long *)(unaff_x19 + 0x20);
              *(long *)(unaff_x20 + 0x30) = lVar5;
              lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x58);
            }
            if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_0406aaec(lVar11);
            }
            if ((lVar6 != 0) && (lVar5 = thunk_FUN_0406ddbc(lVar6,lVar11), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_04031c0c(lVar6,lVar11);
            }
          }
        }
        return;
      }
    }
  }
LAB_05f7954c:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


