/*
FUNCTION_NAME: Fusion.Photon.Realtime.CustomTypesUnity$$SerializeVector3
ENTRY_POINT: 01c1caac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Fusion_Photon_Realtime_CustomTypesUnity__SerializeVector3(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x21;
  int unaff_w22;
  int unaff_w23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long lVar5;
  undefined8 *in_stack_00000000;
  undefined8 in_stack_00000008;
  
code_r0x01c1caac:
  uVar4 = 0;
  do {
    *in_stack_00000000 = uVar4;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (*unaff_x24 == 0) {
LAB_01c1cc10:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01c1cc10 to 01d1cc4f has its CatchHandler @ 01c1cc68 */
      FUN_01ab6c3c();
    }
    FUN_01f7e6b0(*unaff_x24,&stack0x00000008,*(undefined8 *)PTR_DAT_03cc35d0);
                    /* try { // try from 01c1cad8 to 01d1cadf has its CatchHandler @ 01c1caf8 */
    *unaff_x26 = in_stack_00000008;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (*unaff_x24 == 0) goto LAB_01c1cc10;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1caa4 with catch @ 01c1caf4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1cad8 with catch @ 01c1caf8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1ca7c with catch @ 01c1cafc
                        */
    FUN_01f7e3e4(*unaff_x24,&stack0x00000008,*(undefined8 *)PTR_DAT_03cc35d8);
    *unaff_x27 = in_stack_00000008;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    do {
      do {
                    /* try { // try from 01c1cb14 to 01d1cb17 has its CatchHandler @ 01c1cb78 */
        unaff_w23 = unaff_w23 + 1;
        lVar5 = *unaff_x24;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar1 = FUN_036d35a8(lVar5,0,0);
        if ((unaff_w22 <= unaff_w23) || ((uVar1 & 1) == 0)) {
          if (*(long *)(unaff_x19 + 0x78) != 0) {
                    /* try { // try from 01c1cb2c to 01d1cb33 has its CatchHandler @ 01c1cb74 */
            FUN_01b5f01c();
            uVar4 = *(undefined8 *)(unaff_x21 + 0x10);
                    /* try { // try from 01c1cb48 to 01d1cb4f has its CatchHandler @ 01c1cb70 */
            if (*(int *)(*unaff_x25 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar1 = FUN_036d35a8(uVar4,0,0);
                    /* try { // try from 01c1cb64 to 01d1cb6f has its CatchHandler @ 01c1cb78 */
            if ((uVar1 & 1) == 0) {
              uVar4 = *(undefined8 *)(unaff_x21 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1cb48 with catch @ 01c1cb70
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1cb2c with catch @ 01c1cb74
                        */
              if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1cb14 with catch @ 01c1cb78
                       catch(type#1 @ 00000000) { ... } // from try @ 01c1cb64 with catch @ 01c1cb78
                        */
                thunk_FUN_01a58e78();
              }
                    /* try { // try from 01c1cb7c to 01d1cc0f has its CatchHandler @ 01c1cb7c
                       catch(type#1 @ 00000000) { ... } // from try @ 01c1cb7c with catch @ 01c1cb7c
                       catch(type#1 @ 00000000) { ... } // from try @ 01c1cc50 with catch @ 01c1cb7c
                       catch(type#1 @ 00000000) { ... } // from try @ 01c1cca0 with catch @ 01c1cb7c
                        */
              uVar1 = FUN_036d35a8(uVar4,0,0);
              if ((uVar1 & 1) == 0) {
                uVar4 = *(undefined8 *)(unaff_x21 + 0x30);
                if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar1 = FUN_036d35a8(uVar4,0,0);
                if ((uVar1 & 1) == 0) {
                  uVar4 = *(undefined8 *)(unaff_x21 + 0x18);
                  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar1 = FUN_036d35a8(uVar4,0,0);
                  if ((uVar1 & 1) == 0) {
                    return;
                  }
                }
              }
            }
            FUN_01c1cc1c();
            return;
          }
          goto LAB_01c1cc10;
        }
        lVar5 = FUN_036cbb80();
        if (lVar5 == 0) goto LAB_01c1cc10;
        plVar2 = (long *)FUN_036dfb58(lVar5,unaff_w23,0);
        if (plVar2 == (long *)0x0) {
          plVar2 = (long *)0x0;
        }
        else if (*plVar2 != *(long *)PTR_DAT_03cc0828) {
          plVar2 = (long *)0x0;
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar1 = FUN_036cee6c(plVar2,0,0);
      } while ((uVar1 & 1) == 0);
      if (plVar2 == (long *)0x0) goto LAB_01c1cc10;
      uVar4 = FUN_036d3824(plVar2,0);
      uVar3 = FUN_01c1c568();
      uVar1 = thunk_FUN_025bd1c0(uVar4,uVar3,0);
    } while ((uVar1 & 1) == 0);
    lVar5 = FUN_036cbbbc(plVar2,0);
    *unaff_x24 = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x24 == 0) ||
       (lVar5 = FUN_01f7eccc(*unaff_x24,*(undefined8 *)PTR_DAT_03cc35e0), lVar5 == 0))
    goto LAB_01c1cc10;
    if (*(int *)(lVar5 + 0x18) < 2) goto code_r0x01c1caac;
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
  } while( true );
}


