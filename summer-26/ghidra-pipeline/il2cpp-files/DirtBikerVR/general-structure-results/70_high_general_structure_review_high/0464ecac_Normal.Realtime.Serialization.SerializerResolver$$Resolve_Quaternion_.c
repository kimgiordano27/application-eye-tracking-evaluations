/*
FUNCTION_NAME: Normal.Realtime.Serialization.SerializerResolver$$Resolve<Quaternion>
ENTRY_POINT: 0464ecac
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0464eeb4) */
/* WARNING: Removing unreachable block (ram,0x0464ef44) */
/* WARNING: Removing unreachable block (ram,0x0464efe8) */
/* WARNING: Removing unreachable block (ram,0x0464effc) */

void Normal_Realtime_Serialization_SerializerResolver__Resolve<Quaternion>
               (undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  void *unaff_x20;
  long *plVar13;
  int iVar14;
  int iVar15;
  long unaff_x29;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
    param_2 = FUN_03ac4090(param_2);
  }
  auVar16 = FUN_0351a5ac(0,param_2);
  plVar13 = auVar16._0_8_;
  *(long **)(unaff_x29 + -0xb0) = plVar13;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(long *)(unaff_x19 + 0x48) = unaff_x29 + -0xb0;
  puVar4 = PTR_DAT_08488568;
  if (plVar13 == (long *)0x0) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = auVar16._8_8_;
    auVar17 = auVar17 << 0x40;
  }
  else {
    iVar14 = 4;
    iVar15 = 0;
    do {
      lVar8 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0464ed48;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar4,0);
LAB_0464ed48:
      auVar17 = (*(code *)*puVar6)(plVar13,puVar6[1]);
      if ((auVar17._0_8_ & 1) == 0) {
        FUN_0350b2a4(unaff_x19 + 0x40);
        lVar8 = *(long *)(unaff_x29 + -0x48);
        *(undefined8 *)(unaff_x19 + 0x50) = 0;
        *(long *)(unaff_x19 + 0x58) = unaff_x19 + 0x90;
        lVar8 = *(long *)(lVar8 + 0x38);
        *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x19 + 0xa8);
        *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x19 + 0xa0);
        *(long *)(unaff_x19 + 0x60) = unaff_x29 + -0x48;
        (*(code *)**(undefined8 **)(lVar8 + 0x50))
                  (unaff_x19 + 0x80,iVar15,*(undefined4 *)(unaff_x19 + 0x24),0);
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x110))
                  (*(undefined8 *)(unaff_x19 + 0xa0),*(undefined8 *)(unaff_x19 + 0xa8),
                   *(undefined8 *)(unaff_x19 + 0x80),*(undefined8 *)(unaff_x19 + 0x88),iVar15);
        *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)(unaff_x19 + 0x88);
        *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)(unaff_x19 + 0x80);
        FUN_035221e8(unaff_x19 + 0x50);
        uVar7 = *(undefined8 *)(unaff_x19 + 0x70);
        *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x19 + 0x78);
        *(undefined8 *)(unaff_x29 + -0x40) = uVar7;
        auVar17 = *(undefined1 (*) [16])(unaff_x29 + -0x40);
        if (*(long *)(*(long *)(unaff_x19 + 0x28) + 0x28) == *(long *)(unaff_x29 + -0x18)) {
          return;
        }
        goto LAB_0464f298;
      }
      plVar13 = *(long **)(unaff_x29 + -0xb0);
      if (plVar13 == (long *)0x0) {
        if (*(long *)(*(long *)(unaff_x19 + 0x28) + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_0464f298;
      }
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0xf8);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03ac4090(lVar8);
      }
      lVar9 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar8) {
            lVar8 = lVar9 + (long)*piVar12 * 0x10 + 0x138;
            goto LAB_0464edcc;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      lVar8 = FUN_03ac43c4(plVar13,lVar8,0);
LAB_0464edcc:
      lVar8 = *(long *)(lVar8 + 8);
      *(void **)(unaff_x29 + -0x30) = unaff_x20;
      (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar13,unaff_x29 + -0x30);
      memcpy(*(void **)(unaff_x19 + 0x18),unaff_x20,*(size_t *)(unaff_x19 + 0x38));
      if (iVar15 == iVar14) {
        *(undefined8 *)(unaff_x19 + 0x50) = 0;
        *(long *)(unaff_x19 + 0x58) = unaff_x19 + 0x90;
        lVar8 = *(long *)(unaff_x29 + -0x48);
        iVar14 = iVar15 << 1;
        *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x19 + 0xa8);
        *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x19 + 0xa0);
        lVar8 = *(long *)(lVar8 + 0x38);
        *(long *)(unaff_x19 + 0x60) = unaff_x29 + -0x48;
        *(undefined8 *)(unaff_x29 + -0x30) = 0;
        *(undefined8 *)(unaff_x29 + -0x28) = 0;
        FUN_051703e4(unaff_x29 + -0x30,iVar14,2,0,*(undefined8 *)(lVar8 + 0x50));
        uVar7 = *(undefined8 *)(unaff_x29 + -0x30);
        uVar2 = *(undefined8 *)(unaff_x29 + -0x28);
        uVar1 = *(undefined8 *)(unaff_x19 + 0xa0);
        uVar3 = *(undefined8 *)(unaff_x19 + 0xa8);
        uVar5 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x78))
                          (unaff_x19 + 0xa0);
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x110))
                  (uVar1,uVar3,uVar7,uVar2,uVar5);
        FUN_05170bb0(unaff_x19 + 0x90,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x118));
        *(undefined8 *)(unaff_x19 + 0xa0) = uVar7;
        *(undefined8 *)(unaff_x19 + 0xa8) = uVar2;
      }
      memcpy(unaff_x20,*(void **)(unaff_x19 + 0x18),*(size_t *)(unaff_x19 + 0x38));
      *(int *)(unaff_x29 + -0x1c) = iVar15;
      puVar6 = *(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x70);
      uVar7 = *puVar6;
      pcVar10 = (code *)puVar6[2];
      *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x1c;
      *(void **)(unaff_x29 + -0x28) = unaff_x20;
      auVar17 = (*pcVar10)(uVar7,puVar6,unaff_x19 + 0xa0,unaff_x29 + -0x30);
      plVar13 = *(long **)(unaff_x29 + -0xb0);
      iVar15 = iVar15 + 1;
    } while (plVar13 != (long *)0x0);
  }
  if (*(long *)(*(long *)(unaff_x19 + 0x28) + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
LAB_0464f298:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar17._0_8_,auVar17._8_8_);
}


