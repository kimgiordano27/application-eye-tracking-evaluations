/*
FUNCTION_NAME: Unity.Services.Vivox.vx_device_t$$Dispose
ENTRY_POINT: 085cf98c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_vx_device_t__Dispose(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 in_x6;
  long lVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  long *unaff_x20;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 unaff_x27;
  
  uVar8 = FUN_04f5025c();
  plVar9 = (long *)FUN_04f5025c();
  uVar10 = FUN_04f5025c();
  uVar11 = thunk_FUN_040b4efc(*unaff_x24);
  FUN_076bca34(uVar11,0);
  uVar12 = thunk_FUN_040b4efc(*unaff_x26);
  FUN_085d02fc(uVar12,param_1,uVar8,uVar10,uVar11);
  uVar8 = thunk_FUN_040b4efc(*unaff_x25);
  FUN_076bca34(uVar8,0);
  Unity_Services_Vivox_vx_evt_sessiongroup_added_t__set_sessiongroup_handle(uVar8);
  if (unaff_x20 == (long *)0x0) {
LAB_085cfa7c:
    if (*(int *)(*(long *)PTR_DAT_09285d28 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar20 = FUN_08974074(0);
  }
  else {
    lVar20 = *unaff_x20;
    uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09331128) {
          puVar13 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_085cfa68;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar13 = (undefined8 *)FUN_040b1e00();
LAB_085cfa68:
    lVar20 = (*(code *)*puVar13)();
    if (lVar20 == 0) goto LAB_085cfa7c;
  }
  if (plVar9 != (long *)0x0) {
    lVar21 = *plVar9;
    uVar22 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09331138) {
          puVar13 = (undefined8 *)(lVar21 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_085cfaf8;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar13 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)PTR_DAT_09331138,0);
LAB_085cfaf8:
    lVar21 = (*(code *)*puVar13)(plVar9,puVar13[1]);
    puVar7 = PTR_DAT_09331168;
    puVar6 = PTR_DAT_09331160;
    puVar5 = PTR_DAT_09331118;
    puVar4 = PTR_DAT_09331108;
    puVar3 = PTR_DAT_093310b0;
    puVar2 = PTR_DAT_093310a0;
    puVar1 = PTR_DAT_09331098;
    if (lVar21 != 0) {
      uVar10 = FUN_074eac78(lVar21,0);
      uVar10 = FUN_074e74a4(*(undefined8 *)puVar7,lVar20,uVar10,0);
      uVar14 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
      FUN_076bca34(uVar14,0);
      uVar15 = thunk_FUN_040b4efc(*(undefined8 *)puVar5);
      FUN_085d0588();
      uVar16 = thunk_FUN_040b4efc(*(undefined8 *)puVar4);
      FUN_085d06b0(uVar16,uVar15);
      uVar15 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
      FUN_085d07d8(uVar15,uVar14,uVar16,uVar12,uVar8);
      lVar21 = FUN_085d1200();
      uVar8 = thunk_FUN_040b4efc(*(undefined8 *)puVar6);
      FUN_085d1400();
      uVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09331110);
      FUN_085d1494(uVar14,uVar8,uVar10);
      lVar17 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
      FUN_076bca34(lVar17,0);
      uVar16 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_093310a8);
      FUN_085d14e0(uVar16,lVar20);
      uVar18 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09331100);
      FUN_076bca34(uVar18,0);
      uVar19 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_093310f8);
      FUN_085d15ec(uVar19,uVar15,uVar16,uVar18);
      uVar16 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09331070);
      FUN_085d164c(uVar16,uVar10,uVar11,uVar8);
      lVar20 = *plVar9;
      uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar22 != 0) {
        piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09331138) {
            puVar13 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_085cfd04;
          }
          uVar22 = uVar22 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar22 != 0);
      }
      puVar13 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)PTR_DAT_09331138,0);
LAB_085cfd04:
      (*(code *)*puVar13)(plVar9,puVar13[1]);
      uVar8 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09331080);
      FUN_076bca34(uVar8,0);
      uVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09331078);
      FUN_085d1768(uVar10,uVar19,uVar15,uVar14,uVar16,uVar12,in_x6,uVar8);
      puVar1 = PTR_DAT_09331088;
      **(undefined8 **)(*(long *)PTR_DAT_09331088 + 0xb8) = uVar10;
      thunk_FUN_040ec700(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar10);
      if (lVar21 != 0) {
        *(undefined8 *)(lVar21 + 0x28) = **(undefined8 **)(*(long *)puVar1 + 0xb8);
        thunk_FUN_040ec700();
        FUN_089c6d28(lVar21,0,0);
        if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
          FUN_085d1b9c();
          puVar13 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
          *puVar13 = uVar14;
          thunk_FUN_040ec700(puVar13,uVar14);
          puVar13 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
          *puVar13 = uVar15;
          thunk_FUN_040ec700(puVar13,uVar15);
          puVar2 = PTR_DAT_09331120;
          lVar20 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
          if (lVar20 != 0) {
            plVar9 = *(long **)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
            if (plVar9 == (long *)0x0) goto LAB_085d00ac;
            lVar21 = *plVar9;
            uVar22 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar22 != 0) {
              piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09331120) {
                  puVar13 = (undefined8 *)(lVar21 + (long)*piVar23 * 0x10 + 0x138);
                  goto LAB_085cfe60;
                }
                uVar22 = uVar22 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar22 != 0);
            }
            puVar13 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)PTR_DAT_09331120,0);
LAB_085cfe60:
            (*(code *)*puVar13)(plVar9,lVar20,puVar13[1]);
            plVar9 = *(long **)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
            if (plVar9 == (long *)0x0) goto LAB_085d00ac;
            lVar20 = *plVar9;
            uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
            uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
            if (uVar22 != 0) {
              piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)puVar2) {
                  puVar13 = (undefined8 *)(lVar20 + (long)(*piVar23 + 2) * 0x10 + 0x138);
                  goto LAB_085cfed4;
                }
                uVar22 = uVar22 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar22 != 0);
            }
            puVar13 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)puVar2,2);
LAB_085cfed4:
            (*(code *)*puVar13)(plVar9,uVar8,puVar13[1]);
            puVar2 = PTR_DAT_09331130;
            plVar9 = *(long **)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
            if (plVar9 == (long *)0x0) goto LAB_085d00ac;
            lVar20 = *plVar9;
            uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
            uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
            if (uVar22 != 0) {
              piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09331130) {
                  puVar13 = (undefined8 *)(lVar20 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                  goto Unity_Services_Vivox_vx_evt_account_archive_message_t__Finalize;
                }
                uVar22 = uVar22 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar22 != 0);
            }
            puVar13 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)PTR_DAT_09331130,1);
Unity_Services_Vivox_vx_evt_account_archive_message_t__Finalize:
            (*(code *)*puVar13)(plVar9,uVar8,puVar13[1]);
            plVar9 = *(long **)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
            if (plVar9 == (long *)0x0) goto LAB_085d00ac;
            lVar20 = *plVar9;
            uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
            uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
            if (uVar22 != 0) {
              piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)puVar2) {
                  puVar13 = (undefined8 *)(lVar20 + (long)(*piVar23 + 3) * 0x10 + 0x138);
                  goto LAB_085cffc4;
                }
                uVar22 = uVar22 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar22 != 0);
            }
            puVar13 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)puVar2,3);
LAB_085cffc4:
            (*(code *)*puVar13)(plVar9,uVar8,puVar13[1]);
          }
          puVar5 = PTR_DAT_09331158;
          puVar4 = PTR_DAT_093310f0;
          puVar3 = PTR_DAT_093310e8;
          puVar2 = PTR_DAT_09331090;
          if (lVar17 != 0) {
            uVar8 = *(undefined8 *)PTR_DAT_093310e0;
            *(undefined1 *)(lVar17 + 0x10) = 1;
            uVar8 = FUN_04f5025c(unaff_x27,uVar8);
            uVar11 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
            uVar10 = thunk_FUN_040b4efc(*(undefined8 *)puVar5);
            FUN_085d1c60(uVar10,uVar8,uVar11);
            FUN_04f5077c(unaff_x27,uVar10,*(undefined8 *)puVar3);
            uVar8 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
            lVar20 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
            FUN_076bca34(lVar20,0);
            *(undefined8 *)(lVar20 + 0x10) = uVar8;
            thunk_FUN_040ec700((undefined8 *)(lVar20 + 0x10),uVar8);
            FUN_04f5077c(unaff_x27,lVar20,*(undefined8 *)puVar4);
            return;
          }
        }
      }
    }
  }
LAB_085d00ac:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


