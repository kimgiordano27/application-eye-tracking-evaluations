/*
FUNCTION_NAME: Hdg.rdtSerializerVector4$$.ctor
ENTRY_POINT: 0217fae4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void Hdg_rdtSerializerVector4___ctor(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  byte unaff_w23;
  int unaff_w24;
  long unaff_x25;
  long *plVar9;
  ulong uVar10;
  undefined *puVar8;
  
  FUN_01ab69ac();
  FUN_01ab69ac(PTR_DAT_03cbfd60);
  *(undefined1 *)(unaff_x25 + 0xb7) = 1;
  FUN_027b3d9c();
  if (unaff_w22 < 1) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
    uVar5 = thunk_FUN_01a89e68();
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cdb390);
    puVar8 = PTR_DAT_03cdb398;
  }
  else {
    if (-1 < unaff_w24) {
      iVar1 = unaff_w22;
      if (unaff_w22 <= unaff_w24) {
        iVar1 = unaff_w24;
      }
      plVar2 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,unaff_w22);
      puVar8 = PTR_DAT_03cbfd60;
      if (plVar2 != (long *)0x0) {
        if (0 < (int)plVar2[3]) {
          uVar10 = 0;
          plVar9 = plVar2 + 4;
          do {
            lVar3 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
            FUN_027b3d9c(lVar3,0);
            if ((lVar3 != 0) &&
               (lVar4 = thunk_FUN_01a89d6c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
              uVar5 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
              FUN_01ab6b14(uVar5,0);
            }
            if (*(uint *)(plVar2 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            *plVar9 = lVar3;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9,lVar3);
            uVar10 = uVar10 + 1;
            plVar9 = plVar9 + 1;
          } while ((long)uVar10 < (long)(int)plVar2[3]);
        }
        uVar5 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbe888);
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb8);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01a46ff8(lVar3);
        }
        lVar3 = FUN_01ab6a94(lVar3,iVar1);
        lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01a46ff8(lVar4);
        }
        uVar6 = thunk_FUN_01a89e68(lVar4);
        FUN_0209f814(uVar6,lVar3,plVar2,uVar5,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0));
        thunk_FUN_01a4b338();
        *(undefined8 *)(unaff_x20 + 0x10) = uVar6;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(unaff_x20 + 0x10),uVar6);
        if (unaff_x21 == 0) {
          unaff_x21 = FUN_01f2d824(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 200));
        }
        *(long *)(unaff_x20 + 0x18) = unaff_x21;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long *)(unaff_x20 + 0x18),unaff_x21);
        *(byte *)(unaff_x20 + 0x20) = unaff_w23 & 1;
        if (lVar3 != 0) {
          iVar1 = 0;
          if ((int)plVar2[3] != 0) {
            iVar1 = *(int *)(lVar3 + 0x18) / (int)plVar2[3];
          }
          *(int *)(unaff_x20 + 0x24) = iVar1;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
    uVar5 = thunk_FUN_01a89e68();
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cd9b38);
    puVar8 = PTR_DAT_03cdb3a0;
  }
  uVar7 = thunk_FUN_01a6ca08(puVar8);
  FUN_026ade84(uVar5,uVar6,uVar7,0);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar5);
}


