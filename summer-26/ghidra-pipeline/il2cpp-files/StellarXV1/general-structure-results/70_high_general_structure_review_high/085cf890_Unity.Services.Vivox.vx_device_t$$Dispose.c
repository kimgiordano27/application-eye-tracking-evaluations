/*
FUNCTION_NAME: Unity.Services.Vivox.vx_device_t$$Dispose
ENTRY_POINT: 085cf890
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_vx_device_t__Dispose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 in_x6;
  long lVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  long unaff_x19;
  long unaff_x27;
  
  FUN_04077588(PTR_DAT_09331110);
  FUN_04077588(PTR_DAT_09331118);
  FUN_04077588(PTR_DAT_09331120);
  FUN_04077588(PTR_DAT_09331128);
  FUN_04077588(PTR_DAT_09331130);
  FUN_04077588(PTR_DAT_09331138);
  FUN_04077588(PTR_DAT_09331140);
  FUN_04077588(PTR_DAT_09331148);
  FUN_04077588(PTR_DAT_09331150);
  FUN_04077588(PTR_DAT_09331158);
  FUN_04077588(PTR_DAT_09331160);
  FUN_04077588(PTR_DAT_09331168);
  *(undefined1 *)(unaff_x19 + 0xe68) = 1;
  puVar3 = PTR_DAT_09331150;
  puVar2 = PTR_DAT_09331148;
  puVar1 = PTR_DAT_09331140;
  if (unaff_x27 == 0) goto LAB_085d00ac;
  plVar8 = (long *)FUN_04f5025c();
  uVar9 = FUN_04f5025c();
  uVar10 = FUN_04f5025c();
  plVar11 = (long *)FUN_04f5025c();
  uVar12 = FUN_04f5025c();
  uVar13 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
  FUN_076bca34(uVar13,0);
  uVar14 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
  FUN_085d02fc(uVar14,uVar9,uVar10,uVar12,uVar13);
  uVar9 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
  FUN_076bca34(uVar9,0);
  Unity_Services_Vivox_vx_evt_sessiongroup_added_t__set_sessiongroup_handle(uVar9);
  if (plVar8 == (long *)0x0) {
LAB_085cfa7c:
    if (*(int *)(*(long *)PTR_DAT_09285d28 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar21 = FUN_08974074(0);
  }
  else {
    lVar21 = *plVar8;
    uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09331128) {
          puVar15 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_085cfa68;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar15 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_09331128,0);
LAB_085cfa68:
    lVar21 = (*(code *)*puVar15)(plVar8,puVar15[1]);
    if (lVar21 == 0) goto LAB_085cfa7c;
  }
  if (plVar11 != (long *)0x0) {
    lVar22 = *plVar11;
    uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09331138) {
          puVar15 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_085cfaf8;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar15 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)PTR_DAT_09331138,0);
LAB_085cfaf8:
    lVar22 = (*(code *)*puVar15)(plVar11,puVar15[1]);
    puVar7 = PTR_DAT_09331168;
    puVar6 = PTR_DAT_09331160;
    puVar5 = PTR_DAT_09331118;
    puVar4 = PTR_DAT_09331108;
    puVar3 = PTR_DAT_093310b0;
    puVar2 = PTR_DAT_093310a0;
    puVar1 = PTR_DAT_09331098;
    if (lVar22 != 0) {
      uVar10 = FUN_074eac78(lVar22,0);
      uVar10 = FUN_074e74a4(*(undefined8 *)puVar7,lVar21,uVar10,0);
      uVar12 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
      FUN_076bca34(uVar12,0);
      uVar16 = thunk_FUN_040b4efc(*(undefined8 *)puVar5);
      FUN_085d0588();
      uVar17 = thunk_FUN_040b4efc(*(undefined8 *)puVar4);
      FUN_085d06b0(uVar17,uVar16);
      uVar16 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
      FUN_085d07d8(uVar16,uVar12,uVar17,uVar14,uVar9);
      lVar22 = FUN_085d1200();
      uVar9 = thunk_FUN_040b4efc(*(undefined8 *)puVar6);
      FUN_085d1400();
      uVar12 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09331110);
      FUN_085d1494(uVar12,uVar9,uVar10);
      lVar18 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
      FUN_076bca34(lVar18,0);
      uVar17 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_093310a8);
      FUN_085d14e0(uVar17,lVar21);
      uVar19 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09331100);
      FUN_076bca34(uVar19,0);
      uVar20 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_093310f8);
      FUN_085d15ec(uVar20,uVar16,uVar17,uVar19);
      uVar17 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09331070);
      FUN_085d164c(uVar17,uVar10,uVar13,uVar9);
      lVar21 = *plVar11;
      uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09331138) {
            puVar15 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_085cfd04;
          }
          uVar23 = uVar23 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar23 != 0);
      }
      puVar15 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)PTR_DAT_09331138,0);
LAB_085cfd04:
      (*(code *)*puVar15)(plVar11,puVar15[1]);
      uVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09331080);
      FUN_076bca34(uVar9,0);
      uVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09331078);
      FUN_085d1768(uVar10,uVar20,uVar16,uVar12,uVar17,uVar14,in_x6,uVar9);
      puVar1 = PTR_DAT_09331088;
      **(undefined8 **)(*(long *)PTR_DAT_09331088 + 0xb8) = uVar10;
      thunk_FUN_040ec700(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar10);
      if (lVar22 != 0) {
        *(undefined8 *)(lVar22 + 0x28) = **(undefined8 **)(*(long *)puVar1 + 0xb8);
        thunk_FUN_040ec700();
        FUN_089c6d28(lVar22,0,0);
        if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
          FUN_085d1b9c();
          puVar15 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
          *puVar15 = uVar12;
          thunk_FUN_040ec700(puVar15,uVar12);
          puVar15 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
          *puVar15 = uVar16;
          thunk_FUN_040ec700(puVar15,uVar16);
          puVar2 = PTR_DAT_09331120;
          lVar21 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
          if (lVar21 != 0) {
            plVar8 = *(long **)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
            if (plVar8 == (long *)0x0) goto LAB_085d00ac;
            lVar22 = *plVar8;
            uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar23 != 0) {
              piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09331120) {
                  puVar15 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
                  goto LAB_085cfe60;
                }
                uVar23 = uVar23 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar23 != 0);
            }
            puVar15 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_09331120,0);
LAB_085cfe60:
            (*(code *)*puVar15)(plVar8,lVar21,puVar15[1]);
            plVar8 = *(long **)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
            if (plVar8 == (long *)0x0) goto LAB_085d00ac;
            lVar21 = *plVar8;
            uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
            uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar23 != 0) {
              piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *(long *)puVar2) {
                  puVar15 = (undefined8 *)(lVar21 + (long)(*piVar24 + 2) * 0x10 + 0x138);
                  goto LAB_085cfed4;
                }
                uVar23 = uVar23 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar23 != 0);
            }
            puVar15 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar2,2);
LAB_085cfed4:
            (*(code *)*puVar15)(plVar8,uVar9,puVar15[1]);
            puVar2 = PTR_DAT_09331130;
            plVar8 = *(long **)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
            if (plVar8 == (long *)0x0) goto LAB_085d00ac;
            lVar21 = *plVar8;
            uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
            uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar23 != 0) {
              piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_09331130) {
                  puVar15 = (undefined8 *)(lVar21 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                  goto Unity_Services_Vivox_vx_evt_account_archive_message_t__Finalize;
                }
                uVar23 = uVar23 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar23 != 0);
            }
            puVar15 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_09331130,1);
Unity_Services_Vivox_vx_evt_account_archive_message_t__Finalize:
            (*(code *)*puVar15)(plVar8,uVar9,puVar15[1]);
            plVar8 = *(long **)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
            if (plVar8 == (long *)0x0) goto LAB_085d00ac;
            lVar21 = *plVar8;
            uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
            uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar23 != 0) {
              piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *(long *)puVar2) {
                  puVar15 = (undefined8 *)(lVar21 + (long)(*piVar24 + 3) * 0x10 + 0x138);
                  goto LAB_085cffc4;
                }
                uVar23 = uVar23 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar23 != 0);
            }
            puVar15 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar2,3);
LAB_085cffc4:
            (*(code *)*puVar15)(plVar8,uVar9,puVar15[1]);
          }
          puVar5 = PTR_DAT_09331158;
          puVar4 = PTR_DAT_093310f0;
          puVar3 = PTR_DAT_093310e8;
          puVar2 = PTR_DAT_09331090;
          if (lVar18 != 0) {
            uVar9 = *(undefined8 *)PTR_DAT_093310e0;
            *(undefined1 *)(lVar18 + 0x10) = 1;
            uVar9 = FUN_04f5025c(unaff_x27,uVar9);
            uVar12 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
            uVar10 = thunk_FUN_040b4efc(*(undefined8 *)puVar5);
            FUN_085d1c60(uVar10,uVar9,uVar12);
            FUN_04f5077c(unaff_x27,uVar10,*(undefined8 *)puVar3);
            uVar9 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
            lVar21 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
            FUN_076bca34(lVar21,0);
            *(undefined8 *)(lVar21 + 0x10) = uVar9;
            thunk_FUN_040ec700((undefined8 *)(lVar21 + 0x10),uVar9);
            FUN_04f5077c(unaff_x27,lVar21,*(undefined8 *)puVar4);
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


