/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnBeforeDeserializeAfterInstanceCreation
ENTRY_POINT: 05c81830
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnBeforeDeserializeAfterInstanceCreation
               (void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  int unaff_w22;
  undefined8 uVar8;
  undefined4 uVar9;
  long lVar10;
  long *unaff_x28;
  undefined8 *unaff_x29;
  float fVar11;
  float fVar12;
  
  FUN_02d6084c();
  *(undefined1 *)(unaff_x21 + 0x6f5) = 1;
  if (*(long *)(unaff_x19 + 0x130) != 0) {
    iVar6 = 0;
    if (unaff_w20 != 0) {
      iVar6 = (unaff_w22 + unaff_w20 + -1) / unaff_w20;
    }
    iVar1 = iVar6 / 0xffff + 1;
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = iVar6 / iVar1;
    }
    FUN_0608bb78(*(long *)(unaff_x19 + 0x130),*(undefined8 *)(unaff_x19 + 0x100),
                 *(undefined4 *)(*(long *)(*unaff_x28 + 0xb8) + 0x88),iVar3,0);
    if ((*(long *)(unaff_x19 + 0xd0) != 0) && (*(long *)(unaff_x19 + 0x130) != 0)) {
      thunk_FUN_0608cdc8(*(long *)(unaff_x19 + 0x130),*(undefined8 *)(unaff_x19 + 0x100),
                         *(undefined4 *)(*(long *)(unaff_x19 + 0xd0) + 0x10),iVar3,iVar1,1,0);
      iVar2 = *(int *)(unaff_x19 + 0x9c);
      lVar7 = *(long *)(unaff_x19 + 0xd0);
      iVar6 = 0;
      if (iVar2 != 0) {
        iVar6 = unaff_w22 / iVar2;
      }
      if (unaff_w22 != iVar6 * iVar2) {
        iVar6 = iVar6 + 1;
      }
      if (lVar7 != 0) {
        lVar10 = *(long *)(unaff_x19 + 0x130);
        uVar8 = *(undefined8 *)(unaff_x19 + 0x100);
        if (iVar2 < iVar6) {
          uVar9 = *(undefined4 *)(lVar7 + 0x48);
          if (*(int *)(*unaff_x28 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          if (lVar10 == 0) goto LAB_05c8207c;
          thunk_FUN_0608c9ac(lVar10,uVar8,uVar9,*(undefined4 *)(*(long *)(*unaff_x28 + 0xb8) + 0x74)
                             ,*(undefined8 *)(unaff_x19 + 0x28),0);
          if ((*(long *)(unaff_x19 + 0xd0) == 0) || (*(long *)(unaff_x19 + 0x130) == 0))
          goto LAB_05c8207c;
          thunk_FUN_0608c9ac(*(long *)(unaff_x19 + 0x130),*(undefined8 *)(unaff_x19 + 0x100),
                             *(undefined4 *)(*(long *)(unaff_x19 + 0xd0) + 0x48),
                             *(undefined4 *)(*(long *)(*unaff_x28 + 0xb8) + 0x70),
                             *(undefined8 *)(unaff_x19 + 0x48),0);
          if ((*(long *)(unaff_x19 + 0xd0) == 0) || (*(long *)(unaff_x19 + 0x130) == 0))
          goto LAB_05c8207c;
          thunk_FUN_0608c9ac(*(long *)(unaff_x19 + 0x130),*(undefined8 *)(unaff_x19 + 0x100),
                             *(undefined4 *)(*(long *)(unaff_x19 + 0xd0) + 0x48),
                             *(undefined4 *)(*(long *)(*unaff_x28 + 0xb8) + 0x7c),
                             *(undefined8 *)(unaff_x19 + 0x58),0);
          if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_05c8207c;
          lVar7 = *(long *)(unaff_x19 + 0x130);
          uVar8 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar9 = *(undefined4 *)(*(long *)(unaff_x19 + 0xd0) + 0x48);
          iVar2 = *(int *)(unaff_x19 + 0x9c);
          if (DAT_06b778bf == '\0') {
            FUN_02d6084c(PTR_DAT_0675e6d8);
            DAT_06b778bf = '\x01';
          }
          puVar4 = PTR_DAT_0675e6d8;
          if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          if (lVar7 == 0) goto LAB_05c8207c;
          fVar12 = (float)unaff_w22;
          fVar11 = (float)(int)(fVar12 / (float)(iVar2 * iVar2));
          iVar2 = -0x80000000;
          if (fVar11 != INFINITY) {
            iVar2 = (int)fVar11;
          }
          thunk_FUN_0608cdc8(lVar7,uVar8,uVar9,iVar2,1,1,0);
          if (*(long *)(unaff_x19 + 0x130) == 0) goto LAB_05c8207c;
          FUN_0608bb78(*(long *)(unaff_x19 + 0x130),*(undefined8 *)(unaff_x19 + 0x100),
                       *(undefined4 *)(*(long *)(*unaff_x28 + 0xb8) + 0x80),iVar6,0);
          if ((*(long *)(unaff_x19 + 0xd0) == 0) || (*(long *)(unaff_x19 + 0x130) == 0))
          goto LAB_05c8207c;
          thunk_FUN_0608c9ac(*(long *)(unaff_x19 + 0x130),*(undefined8 *)(unaff_x19 + 0x100),
                             *(undefined4 *)(*(long *)(unaff_x19 + 0xd0) + 0x10),
                             *(undefined4 *)(*(long *)(*unaff_x28 + 0xb8) + 0x70),
                             *(undefined8 *)(unaff_x19 + 0x58),0);
          if ((*(long *)(unaff_x19 + 0xd0) == 0) || (*(long *)(unaff_x19 + 0x130) == 0))
          goto LAB_05c8207c;
          thunk_FUN_0608c9ac(*(long *)(unaff_x19 + 0x130),*(undefined8 *)(unaff_x19 + 0x100),
                             *(undefined4 *)(*(long *)(unaff_x19 + 0xd0) + 0x10),
                             *(undefined4 *)(*(long *)(*unaff_x28 + 0xb8) + 0x7c),
                             *(undefined8 *)(unaff_x19 + 0x60),0);
          if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_05c8207c;
          lVar7 = *(long *)(unaff_x19 + 0x130);
          uVar8 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar9 = *(undefined4 *)(*(long *)(unaff_x19 + 0xd0) + 0x10);
          iVar6 = *(int *)(unaff_x19 + 0x9c);
          if (DAT_06b778bf == '\0') {
            FUN_02d6084c(PTR_DAT_0675e6d8);
            DAT_06b778bf = '\x01';
          }
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          if (lVar7 == 0) goto LAB_05c8207c;
          fVar11 = (float)(int)(fVar12 / (float)(iVar6 * iVar6));
          iVar6 = -0x80000000;
          if (fVar11 != INFINITY) {
            iVar6 = (int)fVar11;
          }
          thunk_FUN_0608cdc8(lVar7,uVar8,uVar9,iVar6,1,1,0);
          if ((*(long *)(unaff_x19 + 0xd0) == 0) || (*(long *)(unaff_x19 + 0x130) == 0))
          goto LAB_05c8207c;
          thunk_FUN_0608c9ac(*(long *)(unaff_x19 + 0x130),*(undefined8 *)(unaff_x19 + 0x100),
                             *(undefined4 *)(*(long *)(unaff_x19 + 0xd0) + 0x14),
                             *(undefined4 *)(*(long *)(*unaff_x28 + 0xb8) + 0x74),
                             *(undefined8 *)(unaff_x19 + 0x58),0);
          if ((*(long *)(unaff_x19 + 0xd0) == 0) || (*(long *)(unaff_x19 + 0x130) == 0))
          goto LAB_05c8207c;
          thunk_FUN_0608c9ac(*(long *)(unaff_x19 + 0x130),*(undefined8 *)(unaff_x19 + 0x100),
                             *(undefined4 *)(*(long *)(unaff_x19 + 0xd0) + 0x14),
                             *(undefined4 *)(*(long *)(*unaff_x28 + 0xb8) + 0x70),
                             *(undefined8 *)(unaff_x19 + 0x60),0);
          if ((*(long *)(unaff_x19 + 0xd0) == 0) || (*(long *)(unaff_x19 + 0x130) == 0))
          goto LAB_05c8207c;
          thunk_FUN_0608c9ac(*(long *)(unaff_x19 + 0x130),*(undefined8 *)(unaff_x19 + 0x100),
                             *(undefined4 *)(*(long *)(unaff_x19 + 0xd0) + 0x14),
                             *(undefined4 *)(*(long *)(*unaff_x28 + 0xb8) + 0x7c),
                             *(undefined8 *)(unaff_x19 + 0x68),0);
          if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_05c8207c;
          lVar7 = *(long *)(unaff_x19 + 0x130);
          uVar8 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar9 = *(undefined4 *)(*(long *)(unaff_x19 + 0xd0) + 0x14);
          iVar6 = *(int *)(unaff_x19 + 0x9c);
          if (DAT_06b778bf == '\0') {
            FUN_02d6084c(PTR_DAT_0675e6d8);
            DAT_06b778bf = '\x01';
          }
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          if (lVar7 == 0) goto LAB_05c8207c;
          fVar11 = (float)(int)(fVar12 / (float)(iVar6 * iVar6 * iVar6));
          iVar6 = -0x80000000;
          if (fVar11 != INFINITY) {
            iVar6 = (int)fVar11;
          }
          thunk_FUN_0608cdc8(lVar7,uVar8,uVar9,iVar6,1,1,0);
          if (*(long *)(unaff_x19 + 0x130) == 0) goto LAB_05c8207c;
          FUN_0608bb78(*(long *)(unaff_x19 + 0x130),*(undefined8 *)(unaff_x19 + 0x100),
                       *(undefined4 *)(*(long *)(*unaff_x28 + 0xb8) + 0x84),0,0);
          if ((*(long *)(unaff_x19 + 0xd0) == 0) || (*(long *)(unaff_x19 + 0x130) == 0))
          goto LAB_05c8207c;
          thunk_FUN_0608c9ac(*(long *)(unaff_x19 + 0x130),*(undefined8 *)(unaff_x19 + 0x100),
                             *(undefined4 *)(*(long *)(unaff_x19 + 0xd0) + 0x18),
                             *(undefined4 *)(*(long *)(*unaff_x28 + 0xb8) + 0x70),
                             *(undefined8 *)(unaff_x19 + 0x60),0);
          if ((*(long *)(unaff_x19 + 0xd0) == 0) || (*(long *)(unaff_x19 + 0x130) == 0))
          goto LAB_05c8207c;
          thunk_FUN_0608c9ac(*(long *)(unaff_x19 + 0x130),*(undefined8 *)(unaff_x19 + 0x100),
                             *(undefined4 *)(*(long *)(unaff_x19 + 0xd0) + 0x18),
                             *(undefined4 *)(*(long *)(*unaff_x28 + 0xb8) + 0x78),
                             *(undefined8 *)(unaff_x19 + 0x68),0);
          if ((*(long *)(unaff_x19 + 0xd0) == 0) || (*(long *)(unaff_x19 + 0x130) == 0))
          goto LAB_05c8207c;
          thunk_FUN_0608c9ac(*(long *)(unaff_x19 + 0x130),*(undefined8 *)(unaff_x19 + 0x100),
                             *(undefined4 *)(*(long *)(unaff_x19 + 0xd0) + 0x18),
                             *(undefined4 *)(*(long *)(*unaff_x28 + 0xb8) + 0x74),
                             *(undefined8 *)(unaff_x19 + 0x58),0);
          if ((*(long *)(unaff_x19 + 0xd0) == 0) || (*(long *)(unaff_x19 + 0x130) == 0))
          goto LAB_05c8207c;
          thunk_FUN_0608c9ac(*(long *)(unaff_x19 + 0x130),*(undefined8 *)(unaff_x19 + 0x100),
                             *(undefined4 *)(*(long *)(unaff_x19 + 0xd0) + 0x18),
                             *(undefined4 *)(*(long *)(*unaff_x28 + 0xb8) + 0x7c),
                             *(undefined8 *)(unaff_x19 + 0x50),0);
          if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_05c8207c;
          lVar7 = *(long *)(unaff_x19 + 0x130);
          uVar8 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar9 = *(undefined4 *)(*(long *)(unaff_x19 + 0xd0) + 0x18);
          iVar6 = *(int *)(unaff_x19 + 0x9c);
          if (DAT_06b778bf == '\0') {
            FUN_02d6084c(PTR_DAT_0675e6d8);
            DAT_06b778bf = '\x01';
          }
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          if (lVar7 == 0) goto LAB_05c8207c;
          fVar11 = (float)(int)(fVar12 / (float)(iVar6 * iVar6));
          iVar6 = (int)fVar11;
          bVar5 = fVar11 == INFINITY;
          unaff_x29 = (undefined8 *)
                      Method_System_Collections_Generic_List<IXRInteractable>_AddRange__;
        }
        else {
          uVar9 = *(undefined4 *)(lVar7 + 0x14);
          if (*(int *)(*unaff_x28 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          if (lVar10 == 0) goto LAB_05c8207c;
          thunk_FUN_0608c9ac(lVar10,uVar8,uVar9,*(undefined4 *)(*(long *)(*unaff_x28 + 0xb8) + 0x74)
                             ,*(undefined8 *)(unaff_x19 + 0x28),0);
          if ((*(long *)(unaff_x19 + 0xd0) == 0) || (*(long *)(unaff_x19 + 0x130) == 0))
          goto LAB_05c8207c;
          thunk_FUN_0608c9ac(*(long *)(unaff_x19 + 0x130),*(undefined8 *)(unaff_x19 + 0x100),
                             *(undefined4 *)(*(long *)(unaff_x19 + 0xd0) + 0x14),
                             *(undefined4 *)(*(long *)(*unaff_x28 + 0xb8) + 0x70),
                             *(undefined8 *)(unaff_x19 + 0x48),0);
          if ((*(long *)(unaff_x19 + 0xd0) == 0) || (*(long *)(unaff_x19 + 0x130) == 0))
          goto LAB_05c8207c;
          thunk_FUN_0608c9ac(*(long *)(unaff_x19 + 0x130),*(undefined8 *)(unaff_x19 + 0x100),
                             *(undefined4 *)(*(long *)(unaff_x19 + 0xd0) + 0x14),
                             *(undefined4 *)(*(long *)(*unaff_x28 + 0xb8) + 0x7c),
                             *(undefined8 *)(unaff_x19 + 0x50),0);
          if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_05c8207c;
          lVar7 = *(long *)(unaff_x19 + 0x130);
          uVar8 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar9 = *(undefined4 *)(*(long *)(unaff_x19 + 0xd0) + 0x14);
          iVar6 = *(int *)(unaff_x19 + 0x9c);
          if (DAT_06b778bf == '\0') {
            FUN_02d6084c(PTR_DAT_0675e6d8);
            DAT_06b778bf = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          if (lVar7 == 0) goto LAB_05c8207c;
          fVar11 = (float)(int)((float)unaff_w22 / (float)(iVar6 * iVar6));
          iVar6 = (int)fVar11;
          bVar5 = false;
          if (!NAN(fVar11)) {
            bVar5 = fVar11 == INFINITY;
          }
        }
        iVar2 = -0x80000000;
        if (!bVar5) {
          iVar2 = iVar6;
        }
        thunk_FUN_0608cdc8(lVar7,uVar8,uVar9,iVar2,1,1,0);
        lVar7 = *(long *)(unaff_x19 + 0x130);
        uVar8 = *(undefined8 *)(unaff_x19 + 0x100);
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if (lVar7 != 0) {
          FUN_0608bb78(lVar7,uVar8,*(undefined4 *)(*(long *)(*unaff_x28 + 0xb8) + 0x80),unaff_w22,0)
          ;
          if (*(long *)(unaff_x19 + 0x130) != 0) {
            FUN_0608bb78(*(long *)(unaff_x19 + 0x130),*(undefined8 *)(unaff_x19 + 0x100),
                         *(undefined4 *)(*(long *)(*unaff_x28 + 0xb8) + 0x84),0,0);
            if ((*(long *)(unaff_x19 + 0xd0) != 0) && (*(long *)(unaff_x19 + 0x130) != 0)) {
              thunk_FUN_0608c9ac(*(long *)(unaff_x19 + 0x130),*(undefined8 *)(unaff_x19 + 0x100),
                                 *(undefined4 *)(*(long *)(unaff_x19 + 0xd0) + 0x18),
                                 *(undefined4 *)(*(long *)(*unaff_x28 + 0xb8) + 0x70),
                                 *(undefined8 *)(unaff_x19 + 0x48),0);
              if ((*(long *)(unaff_x19 + 0xd0) != 0) && (*(long *)(unaff_x19 + 0x130) != 0)) {
                thunk_FUN_0608c9ac(*(long *)(unaff_x19 + 0x130),*(undefined8 *)(unaff_x19 + 0x100),
                                   *(undefined4 *)(*(long *)(unaff_x19 + 0xd0) + 0x18),
                                   *(undefined4 *)(*(long *)(*unaff_x28 + 0xb8) + 0x78),
                                   *(undefined8 *)(unaff_x19 + 0x50),0);
                if ((*(long *)(unaff_x19 + 0xd0) != 0) && (*(long *)(unaff_x19 + 0x130) != 0)) {
                  thunk_FUN_0608c9ac(*(long *)(unaff_x19 + 0x130),*(undefined8 *)(unaff_x19 + 0x100)
                                     ,*(undefined4 *)(*(long *)(unaff_x19 + 0xd0) + 0x18),
                                     *(undefined4 *)(*(long *)(*unaff_x28 + 0xb8) + 0x74),
                                     *(undefined8 *)(unaff_x19 + 0x28),0);
                  if ((*(long *)(unaff_x19 + 0xd0) != 0) && (*(long *)(unaff_x19 + 0x130) != 0)) {
                    thunk_FUN_0608c9ac(*(long *)(unaff_x19 + 0x130),
                                       *(undefined8 *)(unaff_x19 + 0x100),
                                       *(undefined4 *)(*(long *)(unaff_x19 + 0xd0) + 0x18),
                                       *(undefined4 *)(*(long *)(*unaff_x28 + 0xb8) + 0x7c),
                                       *(undefined8 *)(unaff_x19 + 0x30),0);
                    if ((*(long *)(unaff_x19 + 0xd0) != 0) && (*(long *)(unaff_x19 + 0x130) != 0)) {
                      thunk_FUN_0608cdc8(*(long *)(unaff_x19 + 0x130),
                                         *(undefined8 *)(unaff_x19 + 0x100),
                                         *(undefined4 *)(*(long *)(unaff_x19 + 0xd0) + 0x18),iVar3,
                                         iVar1,1,0);
                      if (*(long *)(unaff_x19 + 0x130) != 0) {
                        FUN_06093bac(*(long *)(unaff_x19 + 0x130),*unaff_x29,0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_05c8207c:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


