/*
FUNCTION_NAME: Normal.Realtime.Serialization.SerializerResolver$$Register<Vector3,-Vector3Serializer>
ENTRY_POINT: 0464e1c4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0464eeb4) */
/* WARNING: Removing unreachable block (ram,0x0464ef44) */
/* WARNING: Removing unreachable block (ram,0x0464ec78) */
/* WARNING: Removing unreachable block (ram,0x0464efe8) */
/* WARNING: Removing unreachable block (ram,0x0464effc) */
/* WARNING: Removing unreachable block (ram,0x0464f004) */
/* WARNING: Removing unreachable block (ram,0x0464f018) */

void Normal_Realtime_Serialization_SerializerResolver__Register<Vector3,_Vector3Serializer>
               (void *param_1,int param_2,size_t param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  long unaff_x19;
  void *unaff_x20;
  long unaff_x21;
  void *pvVar21;
  size_t unaff_x22;
  void *unaff_x23;
  void *unaff_x24;
  size_t unaff_x25;
  long *unaff_x26;
  size_t sVar22;
  size_t unaff_x27;
  long unaff_x28;
  undefined1 *__s;
  long unaff_x29;
  undefined1 auVar23 [16];
  
  memset(param_1,param_2,param_3);
  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  *(undefined8 *)(unaff_x29 + -0x88) = 0;
  __s = &stack0x00000000 + -unaff_x28;
  *(undefined1 **)(unaff_x29 + -0x98) = __s;
  memset(__s,0,unaff_x25);
  *(undefined8 *)(unaff_x29 + -0xa8) = 0;
  *(undefined8 *)(unaff_x29 + -0xa0) = 0;
  *(undefined8 *)(unaff_x29 + -0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  *(undefined8 *)(unaff_x19 + 0xa8) = 0;
  *(undefined1 **)(unaff_x19 + 0x18) = __s + -unaff_x21;
  memset(__s + -unaff_x21,0,unaff_x22);
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  if (unaff_x26 == (long *)0x0) {
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar13 = thunk_FUN_03ac74bc();
    uVar14 = thunk_FUN_03af1434(PTR_DAT_08492c80);
    uVar14 = FUN_066af6a0(uVar13,uVar14,0);
    auVar23._8_8_ = *(undefined8 *)(unaff_x29 + -0x48);
    auVar23._0_8_ = uVar14;
    if (*(long *)(*(long *)(unaff_x19 + 0x28) + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar13,*(undefined8 *)(unaff_x29 + -0x48));
    }
    goto LAB_0464f298;
  }
  lVar15 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 8);
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    FUN_03ac4090(lVar15);
  }
  lVar15 = thunk_FUN_03ac73c0();
  if (lVar15 == 0) {
    lVar15 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x10);
    if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
      FUN_03ac4090(lVar15);
    }
    plVar11 = (long *)thunk_FUN_03ac73c0();
    lVar15 = *(long *)(*(long *)(unaff_x29 + -0x48) + 0x38);
    if (plVar11 == (long *)0x0) {
      lVar15 = *(long *)(lVar15 + 0x18);
      if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_03ac4090();
      }
      lVar16 = *unaff_x26;
      bVar3 = *(byte *)(lVar16 + 0x130);
      if (bVar3 < *(byte *)(lVar15 + 0x130)) {
        lVar19 = *(long *)(unaff_x29 + -0x48);
      }
      else {
        lVar19 = *(long *)(unaff_x29 + -0x48);
        if (*(long *)(*(long *)(lVar16 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) == lVar15
           ) {
          uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x38) + 0x80))();
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x50))
                    (unaff_x29 + -0x78,uVar8,*(undefined4 *)(unaff_x19 + 0x24),0);
          pvVar21 = *(void **)(unaff_x19 + 0x10);
          puVar12 = *(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x88);
          uVar13 = *puVar12;
          pcVar17 = (code *)puVar12[2];
          *(void **)(unaff_x19 + 0x50) = pvVar21;
          (*pcVar17)(uVar13);
          memcpy(unaff_x24,pvVar21,unaff_x27);
          sVar22 = *(size_t *)(unaff_x19 + 0x38);
          *(undefined8 *)(unaff_x19 + 0x50) = 0;
          *(long *)(unaff_x19 + 0x58) = unaff_x29 + -0x48;
          iVar9 = 0;
          *(long *)(unaff_x19 + 0x60) = unaff_x29 + -0x50;
          *(long *)(unaff_x19 + 0x68) = unaff_x29 + -0x80;
          while (uVar18 = (*(code *)**(undefined8 **)
                                      (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0xa8))
                                    (unaff_x24), (uVar18 & 1) != 0) {
            puVar12 = *(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x98);
            uVar13 = *puVar12;
            pcVar17 = (code *)puVar12[2];
            *(void **)(unaff_x29 + -0x30) = unaff_x20;
            (*pcVar17)(uVar13,puVar12,*(undefined8 *)(unaff_x29 + -0x80),unaff_x29 + -0x30);
            memcpy(unaff_x23,unaff_x20,sVar22);
            puVar12 = *(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x70);
            uVar13 = *puVar12;
            pcVar17 = (code *)puVar12[2];
            *(int *)(unaff_x19 + 0x40) = iVar9;
            *(long *)(unaff_x29 + -0x30) = unaff_x19 + 0x40;
            *(void **)(unaff_x29 + -0x28) = unaff_x23;
            (*pcVar17)(uVar13,puVar12,unaff_x29 + -0x78,unaff_x29 + -0x30);
            unaff_x24 = *(void **)(unaff_x29 + -0x80);
            iVar9 = iVar9 + 1;
          }
          lVar16 = *(long *)(*(long *)(unaff_x29 + -0x48) + 0x38);
          lVar15 = *(long *)(lVar16 + 0x90);
          if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_03ac4090();
            lVar16 = *(long *)(*(long *)(unaff_x29 + -0x48) + 0x38);
          }
          FUN_03a8b394(lVar15,*(undefined8 *)(lVar16 + 0xb0),**(undefined8 **)(unaff_x19 + 0x60),
                       **(undefined8 **)(unaff_x19 + 0x68),0,0);
          uVar14 = *(undefined8 *)(unaff_x29 + -0x70);
          uVar13 = *(undefined8 *)(unaff_x29 + -0x78);
          goto LAB_0464e494;
        }
      }
      lVar15 = *(long *)(*(long *)(lVar19 + 0x38) + 0x20);
      if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_03ac4090();
        lVar16 = *unaff_x26;
        bVar3 = *(byte *)(lVar16 + 0x130);
      }
      if (bVar3 < *(byte *)(lVar15 + 0x130)) {
        lVar19 = *(long *)(unaff_x29 + -0x48);
      }
      else {
        lVar19 = *(long *)(unaff_x29 + -0x48);
        if (*(long *)(*(long *)(lVar16 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) == lVar15
           ) {
          uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x38) + 0xb8))();
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x50))
                    (unaff_x29 + -0x90,uVar8,*(undefined4 *)(unaff_x19 + 0x24),0);
          pvVar21 = *(void **)(unaff_x19 + 8);
          puVar12 = *(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0xc0);
          uVar13 = *puVar12;
          pcVar17 = (code *)puVar12[2];
          *(void **)(unaff_x19 + 0x50) = pvVar21;
          (*pcVar17)(uVar13);
          memcpy(__s,pvVar21,*(size_t *)(unaff_x19 + 0x30));
          sVar22 = *(size_t *)(unaff_x19 + 0x38);
          *(undefined8 *)(unaff_x19 + 0x50) = 0;
          *(long *)(unaff_x19 + 0x58) = unaff_x29 + -0x48;
          iVar9 = 0;
          *(long *)(unaff_x19 + 0x60) = unaff_x29 + -0x58;
          *(long *)(unaff_x19 + 0x68) = unaff_x29 + -0x98;
          while (uVar18 = (*(code *)**(undefined8 **)
                                      (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0xe0))(__s),
                (uVar18 & 1) != 0) {
            puVar12 = *(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0xd0);
            uVar13 = *puVar12;
            pcVar17 = (code *)puVar12[2];
            *(void **)(unaff_x29 + -0x30) = unaff_x20;
            (*pcVar17)(uVar13,puVar12,*(undefined8 *)(unaff_x29 + -0x98),unaff_x29 + -0x30);
            memcpy(unaff_x23,unaff_x20,sVar22);
            puVar12 = *(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x70);
            uVar13 = *puVar12;
            pcVar17 = (code *)puVar12[2];
            *(int *)(unaff_x19 + 0x40) = iVar9;
            *(long *)(unaff_x29 + -0x30) = unaff_x19 + 0x40;
            *(void **)(unaff_x29 + -0x28) = unaff_x23;
            (*pcVar17)(uVar13,puVar12,unaff_x29 + -0x90,unaff_x29 + -0x30);
            __s = *(undefined1 **)(unaff_x29 + -0x98);
            iVar9 = iVar9 + 1;
          }
          lVar16 = *(long *)(*(long *)(unaff_x29 + -0x48) + 0x38);
          lVar15 = *(long *)(lVar16 + 200);
          if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_03ac4090();
            lVar16 = *(long *)(*(long *)(unaff_x29 + -0x48) + 0x38);
          }
          FUN_03a8b394(lVar15,*(undefined8 *)(lVar16 + 0xe8),**(undefined8 **)(unaff_x19 + 0x60),
                       **(undefined8 **)(unaff_x19 + 0x68),0,0);
          uVar14 = *(undefined8 *)(unaff_x29 + -0x88);
          uVar13 = *(undefined8 *)(unaff_x29 + -0x90);
          goto LAB_0464e494;
        }
      }
      sVar22 = *(size_t *)(unaff_x19 + 0x38);
      lVar15 = *(long *)(*(long *)(lVar19 + 0x38) + 0x28);
      if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
        FUN_03ac4090(lVar15);
      }
      lVar15 = thunk_FUN_03ac73c0();
      lVar16 = *(long *)(*(long *)(unaff_x29 + -0x48) + 0x38);
      if (lVar15 == 0) {
        lVar15 = *(long *)(lVar16 + 0x30);
        if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
          FUN_03ac4090(lVar15);
        }
        lVar15 = thunk_FUN_03ac73c0();
        lVar16 = *(long *)(*(long *)(unaff_x29 + -0x48) + 0x38);
        if (lVar15 == 0) {
          (*(code *)**(undefined8 **)(lVar16 + 0x50))(unaff_x19 + 0xa0,4,2,0);
          lVar15 = **(long **)(*(long *)(unaff_x29 + -0x48) + 0x38);
          if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_03ac4090(lVar15);
          }
          auVar23 = FUN_0351a5ac(0,lVar15);
          plVar11 = auVar23._0_8_;
          *(long **)(unaff_x29 + -0xb0) = plVar11;
          *(undefined8 *)(unaff_x19 + 0x40) = 0;
          *(long *)(unaff_x19 + 0x48) = unaff_x29 + -0xb0;
          puVar7 = PTR_DAT_08488568;
          if (plVar11 == (long *)0x0) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = auVar23._8_8_;
            auVar23 = auVar4 << 0x40;
          }
          else {
            iVar9 = 4;
            iVar10 = 0;
            do {
              lVar15 = *plVar11;
              uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar18 != 0) {
                piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)puVar7) {
                    puVar12 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_0464ed48;
                  }
                  uVar18 = uVar18 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar18 != 0);
              }
              puVar12 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)puVar7,0);
LAB_0464ed48:
              auVar23 = (*(code *)*puVar12)(plVar11,puVar12[1]);
              if ((auVar23._0_8_ & 1) == 0) {
                FUN_0350b2a4(unaff_x19 + 0x40);
                lVar15 = *(long *)(unaff_x29 + -0x48);
                *(undefined8 *)(unaff_x19 + 0x50) = 0;
                *(long *)(unaff_x19 + 0x58) = unaff_x19 + 0x90;
                lVar15 = *(long *)(lVar15 + 0x38);
                *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x19 + 0xa8);
                *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x19 + 0xa0);
                *(long *)(unaff_x19 + 0x60) = unaff_x29 + -0x48;
                (*(code *)**(undefined8 **)(lVar15 + 0x50))
                          (unaff_x19 + 0x80,iVar10,*(undefined4 *)(unaff_x19 + 0x24),0);
                (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x110))
                          (*(undefined8 *)(unaff_x19 + 0xa0),*(undefined8 *)(unaff_x19 + 0xa8),
                           *(undefined8 *)(unaff_x19 + 0x80),*(undefined8 *)(unaff_x19 + 0x88),
                           iVar10);
                *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)(unaff_x19 + 0x88);
                *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)(unaff_x19 + 0x80);
                FUN_035221e8(unaff_x19 + 0x50);
                uVar14 = *(undefined8 *)(unaff_x19 + 0x78);
                uVar13 = *(undefined8 *)(unaff_x19 + 0x70);
                goto LAB_0464e494;
              }
              plVar11 = *(long **)(unaff_x29 + -0xb0);
              if (plVar11 == (long *)0x0) {
                if (*(long *)(*(long *)(unaff_x19 + 0x28) + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_0464f298;
              }
              lVar15 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0xf8);
              if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
                lVar15 = FUN_03ac4090(lVar15);
              }
              lVar16 = *plVar11;
              uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar18 != 0) {
                piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == lVar15) {
                    lVar15 = lVar16 + (long)*piVar20 * 0x10 + 0x138;
                    goto LAB_0464edcc;
                  }
                  uVar18 = uVar18 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar18 != 0);
              }
              lVar15 = FUN_03ac43c4(plVar11,lVar15,0);
LAB_0464edcc:
              lVar15 = *(long *)(lVar15 + 8);
              *(void **)(unaff_x29 + -0x30) = unaff_x20;
              (**(code **)(lVar15 + 0x10))
                        (*(undefined8 *)(lVar15 + 8),lVar15,plVar11,unaff_x29 + -0x30);
              memcpy(*(void **)(unaff_x19 + 0x18),unaff_x20,*(size_t *)(unaff_x19 + 0x38));
              if (iVar10 == iVar9) {
                *(undefined8 *)(unaff_x19 + 0x50) = 0;
                *(long *)(unaff_x19 + 0x58) = unaff_x19 + 0x90;
                lVar15 = *(long *)(unaff_x29 + -0x48);
                iVar9 = iVar10 << 1;
                *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x19 + 0xa8);
                *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x19 + 0xa0);
                lVar15 = *(long *)(lVar15 + 0x38);
                *(long *)(unaff_x19 + 0x60) = unaff_x29 + -0x48;
                *(undefined8 *)(unaff_x29 + -0x30) = 0;
                *(undefined8 *)(unaff_x29 + -0x28) = 0;
                FUN_051703e4(unaff_x29 + -0x30,iVar9,2,0,*(undefined8 *)(lVar15 + 0x50));
                uVar13 = *(undefined8 *)(unaff_x29 + -0x30);
                uVar1 = *(undefined8 *)(unaff_x29 + -0x28);
                uVar14 = *(undefined8 *)(unaff_x19 + 0xa0);
                uVar2 = *(undefined8 *)(unaff_x19 + 0xa8);
                uVar8 = (*(code *)**(undefined8 **)
                                    (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x78))
                                  (unaff_x19 + 0xa0);
                (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x110))
                          (uVar14,uVar2,uVar13,uVar1,uVar8);
                FUN_05170bb0(unaff_x19 + 0x90,
                             *(undefined8 *)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x118)
                            );
                *(undefined8 *)(unaff_x19 + 0xa0) = uVar13;
                *(undefined8 *)(unaff_x19 + 0xa8) = uVar1;
              }
              memcpy(unaff_x20,*(void **)(unaff_x19 + 0x18),*(size_t *)(unaff_x19 + 0x38));
              *(int *)(unaff_x29 + -0x1c) = iVar10;
              puVar12 = *(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x70);
              uVar13 = *puVar12;
              pcVar17 = (code *)puVar12[2];
              *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x1c;
              *(void **)(unaff_x29 + -0x28) = unaff_x20;
              auVar23 = (*pcVar17)(uVar13,puVar12,unaff_x19 + 0xa0,unaff_x29 + -0x30);
              plVar11 = *(long **)(unaff_x29 + -0xb0);
              iVar10 = iVar10 + 1;
            } while (plVar11 != (long *)0x0);
          }
          if (*(long *)(*(long *)(unaff_x19 + 0x28) + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
        }
        else {
          lVar16 = *(long *)(lVar16 + 0x30);
          if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_03ac4090(lVar16);
          }
          uVar8 = FUN_0351a5ac(0,lVar16,lVar15);
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x50))
                    (unaff_x19 + 0xb0,uVar8,*(undefined4 *)(unaff_x19 + 0x24),0);
          lVar16 = **(long **)(*(long *)(unaff_x29 + -0x48) + 0x38);
          if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_03ac4090(lVar16);
          }
          auVar23 = FUN_0351a5ac(0,lVar16,lVar15);
          plVar11 = auVar23._0_8_;
          *(long **)(unaff_x29 + -0xb0) = plVar11;
          *(undefined8 *)(unaff_x29 + -0x30) = 0;
          *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0xb0;
          puVar7 = PTR_DAT_08488568;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = auVar23._8_8_;
          auVar23 = auVar5 << 0x40;
          if (plVar11 != (long *)0x0) {
            iVar9 = 0;
            do {
              lVar15 = *plVar11;
              uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar18 != 0) {
                piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)puVar7) {
                    puVar12 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_0464e708;
                  }
                  uVar18 = uVar18 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar18 != 0);
              }
              puVar12 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)puVar7,0);
LAB_0464e708:
              auVar23 = (*(code *)*puVar12)(plVar11,puVar12[1]);
              if ((auVar23._0_8_ & 1) == 0) {
                FUN_0350b2a4(unaff_x29 + -0x30);
                uVar14 = *(undefined8 *)(unaff_x19 + 0xb8);
                uVar13 = *(undefined8 *)(unaff_x19 + 0xb0);
                goto LAB_0464e494;
              }
              plVar11 = *(long **)(unaff_x29 + -0xb0);
              if (plVar11 == (long *)0x0) {
                if (*(long *)(*(long *)(unaff_x19 + 0x28) + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                goto LAB_0464f298;
              }
              lVar15 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0xf8);
              if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
                lVar15 = FUN_03ac4090(lVar15);
              }
              lVar16 = *plVar11;
              uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar18 != 0) {
                piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == lVar15) {
                    lVar15 = lVar16 + (long)*piVar20 * 0x10 + 0x138;
                    goto LAB_0464e78c;
                  }
                  uVar18 = uVar18 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar18 != 0);
              }
              lVar15 = FUN_03ac43c4(plVar11,lVar15,0);
LAB_0464e78c:
              lVar15 = *(long *)(lVar15 + 8);
              *(void **)(unaff_x19 + 0x50) = unaff_x20;
              (**(code **)(lVar15 + 0x10))
                        (*(undefined8 *)(lVar15 + 8),lVar15,plVar11,unaff_x19 + 0x50);
              memcpy(unaff_x23,unaff_x20,sVar22);
              puVar12 = *(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x70);
              uVar13 = *puVar12;
              pcVar17 = (code *)puVar12[2];
              *(int *)(unaff_x19 + 0x40) = iVar9;
              *(long *)(unaff_x19 + 0x50) = unaff_x19 + 0x40;
              *(void **)(unaff_x19 + 0x58) = unaff_x23;
              auVar23 = (*pcVar17)(uVar13,puVar12,unaff_x19 + 0xb0,unaff_x19 + 0x50);
              plVar11 = *(long **)(unaff_x29 + -0xb0);
              iVar9 = iVar9 + 1;
            } while (plVar11 != (long *)0x0);
          }
          if (*(long *)(*(long *)(unaff_x19 + 0x28) + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
        }
      }
      else {
        lVar16 = *(long *)(lVar16 + 0x28);
        if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_03ac4090(lVar16);
        }
        uVar8 = FUN_0351a5ac(0,lVar16,lVar15);
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x50))
                  (unaff_x29 + -0xa8,uVar8,*(undefined4 *)(unaff_x19 + 0x24),0);
        lVar16 = **(long **)(*(long *)(unaff_x29 + -0x48) + 0x38);
        if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_03ac4090(lVar16);
        }
        auVar23 = FUN_0351a5ac(0,lVar16,lVar15);
        plVar11 = auVar23._0_8_;
        *(long **)(unaff_x29 + -0xb0) = plVar11;
        *(undefined8 *)(unaff_x29 + -0x30) = 0;
        *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0xb0;
        puVar7 = PTR_DAT_08488568;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = auVar23._8_8_;
        auVar23 = auVar6 << 0x40;
        if (plVar11 != (long *)0x0) {
          iVar9 = 0;
          do {
            lVar15 = *plVar11;
            uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar18 != 0) {
              piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar7) {
                  puVar12 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_0464e888;
                }
                uVar18 = uVar18 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar18 != 0);
            }
            puVar12 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)puVar7,0);
LAB_0464e888:
            auVar23 = (*(code *)*puVar12)(plVar11,puVar12[1]);
            if ((auVar23._0_8_ & 1) == 0) {
              FUN_0350b2a4(unaff_x29 + -0x30);
              uVar14 = *(undefined8 *)(unaff_x29 + -0xa0);
              uVar13 = *(undefined8 *)(unaff_x29 + -0xa8);
              goto LAB_0464e494;
            }
            plVar11 = *(long **)(unaff_x29 + -0xb0);
            if (plVar11 == (long *)0x0) {
              if (*(long *)(*(long *)(unaff_x19 + 0x28) + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              goto LAB_0464f298;
            }
            lVar15 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0xf8);
            if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
              lVar15 = FUN_03ac4090(lVar15);
            }
            lVar16 = *plVar11;
            uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar18 != 0) {
              piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == lVar15) {
                  lVar15 = lVar16 + (long)*piVar20 * 0x10 + 0x138;
                  goto LAB_0464e90c;
                }
                uVar18 = uVar18 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar18 != 0);
            }
            lVar15 = FUN_03ac43c4(plVar11,lVar15,0);
LAB_0464e90c:
            lVar15 = *(long *)(lVar15 + 8);
            *(void **)(unaff_x19 + 0x50) = unaff_x20;
            (**(code **)(lVar15 + 0x10))
                      (*(undefined8 *)(lVar15 + 8),lVar15,plVar11,unaff_x19 + 0x50);
            memcpy(unaff_x23,unaff_x20,sVar22);
            puVar12 = *(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x70);
            uVar13 = *puVar12;
            pcVar17 = (code *)puVar12[2];
            *(int *)(unaff_x19 + 0x40) = iVar9;
            *(long *)(unaff_x19 + 0x50) = unaff_x19 + 0x40;
            *(void **)(unaff_x19 + 0x58) = unaff_x23;
            auVar23 = (*pcVar17)(uVar13,puVar12,unaff_x29 + -0xa8,unaff_x19 + 0x50);
            plVar11 = *(long **)(unaff_x29 + -0xb0);
            iVar9 = iVar9 + 1;
          } while (plVar11 != (long *)0x0);
        }
        if (*(long *)(*(long *)(unaff_x19 + 0x28) + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
      }
      goto LAB_0464f298;
    }
    lVar15 = *(long *)(lVar15 + 0x28);
    if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_03ac4090(lVar15);
    }
    lVar16 = *plVar11;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar15) {
          puVar12 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_0464e35c;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_03ac43c4(plVar11,lVar15,0);
LAB_0464e35c:
    uVar8 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x50))
              (unaff_x29 + -0x68,uVar8,*(undefined4 *)(unaff_x19 + 0x24),0);
    iVar9 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x78))
                      (unaff_x29 + -0x68);
    if (0 < iVar9) {
      iVar9 = 0;
      do {
        lVar15 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x10);
        if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_03ac4090(lVar15);
        }
        *(int *)(unaff_x29 + -0x30) = iVar9;
        lVar16 = *plVar11;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 != 0) {
          piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar15) {
              lVar15 = lVar16 + (long)*piVar20 * 0x10 + 0x138;
              goto LAB_0464e424;
            }
            uVar18 = uVar18 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar18 != 0);
        }
        lVar15 = FUN_03ac43c4(plVar11,lVar15,0);
LAB_0464e424:
        *(long *)(unaff_x19 + 0x50) = unaff_x29 + -0x30;
        *(void **)(unaff_x19 + 0x58) = unaff_x20;
        lVar15 = *(long *)(lVar15 + 8);
        (**(code **)(lVar15 + 0x10))(*(undefined8 *)(lVar15 + 8),lVar15,plVar11,unaff_x19 + 0x50);
        puVar12 = *(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x70);
        uVar13 = *puVar12;
        pcVar17 = (code *)puVar12[2];
        *(int *)(unaff_x29 + -0x30) = iVar9;
        *(long *)(unaff_x19 + 0x50) = unaff_x29 + -0x30;
        *(void **)(unaff_x19 + 0x58) = unaff_x20;
        (*pcVar17)(uVar13,puVar12,unaff_x29 + -0x68,unaff_x19 + 0x50);
        iVar9 = iVar9 + 1;
        iVar10 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x78))
                           (unaff_x29 + -0x68);
      } while (iVar9 < iVar10);
    }
    uVar14 = *(undefined8 *)(unaff_x29 + -0x60);
    uVar13 = *(undefined8 *)(unaff_x29 + -0x68);
LAB_0464e494:
    *(undefined8 *)(unaff_x29 + -0x38) = uVar14;
    *(undefined8 *)(unaff_x29 + -0x40) = uVar13;
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x40) = 0;
    *(undefined8 *)(unaff_x29 + -0x38) = 0;
    FUN_05170558(unaff_x29 + -0x40,lVar15,*(undefined4 *)(unaff_x19 + 0x24),
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x29 + -0x48) + 0x38) + 0x40));
  }
  auVar23 = *(undefined1 (*) [16])(unaff_x29 + -0x40);
  if (*(long *)(*(long *)(unaff_x19 + 0x28) + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return;
  }
LAB_0464f298:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar23._0_8_,auVar23._8_8_);
}


