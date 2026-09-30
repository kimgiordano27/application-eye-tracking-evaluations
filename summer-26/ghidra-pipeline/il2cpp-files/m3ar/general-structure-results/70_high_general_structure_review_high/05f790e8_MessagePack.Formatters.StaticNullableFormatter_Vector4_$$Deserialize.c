/*
FUNCTION_NAME: MessagePack.Formatters.StaticNullableFormatter<Vector4>$$Deserialize
ENTRY_POINT: 05f790e8
PROGRAM: m3ar-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void MessagePack_Formatters_StaticNullableFormatter<Vector4>__Deserialize
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long in_x9;
  long in_x10;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  
  piVar8 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar8 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)(*piVar8 + 1) * 0x10 + 0x138);
      goto LAB_05f79124;
    }
    in_x9 = in_x9 + -1;
    piVar8 = piVar8 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_0406ae20();
LAB_05f79124:
  bVar2 = (*(code *)*puVar3)();
  uVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30))();
  if ((uVar4 & 1) != 0) {
    lVar5 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38))();
    if (lVar5 == 0) goto LAB_05f7954c;
    bVar2 = bVar2 | *(char *)(lVar5 + 0x10) != '\0';
  }
  *(byte *)(unaff_x20 + 0x50) = bVar2 & 1;
  if (*(long **)(unaff_x20 + 0x18) != (long *)0x0) {
    lVar5 = **(long **)(unaff_x20 + 0x18);
    if (lVar5 == *(long *)PTR_DAT_08f8c2d8) {
      thunk_FUN_0406e000();
      return;
    }
    if (lVar5 == *(long *)PTR_DAT_08f8c308) {
      puVar3 = (undefined8 *)thunk_FUN_0406e000();
      plVar9 = (long *)*puVar3;
      if (*(char *)(unaff_x20 + 0x20) == '\0') {
        if (plVar9 == (long *)0x0) goto LAB_05f7954c;
        uVar6 = (**(code **)(*plVar9 + 0x2d8))(plVar9,1,*(undefined8 *)(*plVar9 + 0x2e0));
        puVar1 = PTR_DAT_08f65618;
        uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
        if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_0408f364(*(long *)(PTR_DAT_08f65618 + 0xe0));
        }
        uVar10 = FUN_074f3c94(uVar10,0);
        lVar5 = FUN_0752e52c(uVar10,uVar6,0);
        lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0406aaec(lVar11);
        }
        if (lVar5 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = thunk_FUN_0406ddbc(lVar5,lVar11);
          if (lVar7 == 0) goto LAB_05f79550;
        }
        lVar11 = *(long *)(unaff_x19 + 0x20);
        *(long *)(unaff_x20 + 0x38) = lVar7;
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x68);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0406aaec(lVar11);
        }
        if ((lVar5 != 0) && (lVar7 = thunk_FUN_0406ddbc(lVar5,lVar11), lVar7 == 0))
        goto LAB_05f79550;
        if ((bVar2 & 1) != 0) {
          return;
        }
        uVar6 = (**(code **)(*plVar9 + 0x308))(plVar9,1,*(undefined8 *)(*plVar9 + 0x310));
        uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_0408f364(*(long *)(puVar1 + 0xe0));
        }
        uVar10 = FUN_074f3c94(uVar10,0);
        lVar5 = FUN_0752e52c(uVar10,uVar6,0);
        lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0406aaec(lVar11);
        }
        if (lVar5 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = thunk_FUN_0406ddbc(lVar5,lVar11);
          if (lVar7 == 0) goto FUN_05f794dc;
        }
        lVar11 = *(long *)(unaff_x19 + 0x20);
        *(long *)(unaff_x20 + 0x40) = lVar7;
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x78);
      }
      else {
        if (plVar9 == (long *)0x0) {
LAB_05f7954c:
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        uVar6 = (**(code **)(*plVar9 + 0x2d8))(plVar9,1,*(undefined8 *)(*plVar9 + 0x2e0));
        puVar1 = PTR_DAT_08f65618;
                    /* try { // try from 05f79224 to 06079297 has its CatchHandler @ 05f793b4 */
        uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x40);
        if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_0408f364(*(long *)(PTR_DAT_08f65618 + 0xe0));
        }
        uVar10 = FUN_074f3c94(uVar10,0);
        lVar5 = FUN_0752e52c(uVar10,uVar6,0);
        lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0406aaec(lVar11);
        }
        if (lVar5 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = thunk_FUN_0406ddbc(lVar5,lVar11);
          if (lVar7 == 0) goto LAB_05f79550;
        }
        lVar11 = *(long *)(unaff_x19 + 0x20);
        *(long *)(unaff_x20 + 0x28) = lVar7;
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x48);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0406aaec(lVar11);
        }
        if ((lVar5 != 0) && (lVar7 = thunk_FUN_0406ddbc(lVar5,lVar11), lVar7 == 0)) {
LAB_05f79550:
                    /* WARNING: Subroutine does not return */
          FUN_04031c0c(lVar5,lVar11);
        }
        if ((bVar2 & 1) != 0) {
          return;
        }
        uVar6 = (**(code **)(*plVar9 + 0x308))(plVar9,1,*(undefined8 *)(*plVar9 + 0x310));
        uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_0408f364(*(long *)(puVar1 + 0xe0));
        }
        uVar10 = FUN_074f3c94(uVar10,0);
        lVar5 = FUN_0752e52c(uVar10,uVar6,0);
        lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0406aaec(lVar11);
        }
        if (lVar5 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = thunk_FUN_0406ddbc(lVar5,lVar11);
          if (lVar7 == 0) {
FUN_05f794dc:
                    /* WARNING: Subroutine does not return */
            FUN_04031c0c(lVar5,lVar11);
          }
        }
        lVar11 = *(long *)(unaff_x19 + 0x20);
        *(long *)(unaff_x20 + 0x30) = lVar7;
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x58);
      }
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0406aaec(lVar11);
      }
      if ((lVar5 != 0) && (lVar7 = thunk_FUN_0406ddbc(lVar5,lVar11), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_04031c0c(lVar5,lVar11);
      }
    }
  }
  return;
}


