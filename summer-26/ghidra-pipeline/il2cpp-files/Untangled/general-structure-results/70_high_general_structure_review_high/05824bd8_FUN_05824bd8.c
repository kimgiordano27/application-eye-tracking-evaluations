/*
FUNCTION_NAME: FUN_05824bd8
ENTRY_POINT: 05824bd8
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_05824bd8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  
  puVar3 = PTR_DAT_06d43108;
  if ((bRam00000000071c6102 & 1) == 0) {
                    /* try { // try from 05824c0c to 05924c0f has its CatchHandler @ 05824c18 */
    FUN_02f07e70(PTR_DAT_06d36fa0);
                    /* try { // try from 05824c10 to 05924c33 has its CatchHandler @ 058249b8 */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 05824c0c with catch @ 05824c18
                        */
    FUN_02f07e70(PTR_DAT_06d432c0);
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 05824b84 with catch @ 05824c1c
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 05824b58 with catch @ 05824c20
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 05824afc with catch @ 05824c24
                        */
    FUN_02f07e70(PTR_DAT_06d43108);
    FUN_02f07e70(PTR_DAT_06d01eb0);
                    /* try { // try from 05824c34 to 05924c37 has its CatchHandler @ 05824c48 */
    FUN_02f07e70(PTR_DAT_06d5e908);
    bRam00000000071c6102 = 1;
  }
                    /* catch() { ... } // from try @ 05824c34 with catch @ 05824c48 */
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar7 = *(long *)puVar3;
  }
  puVar3 = PTR_DAT_06d432c0;
  if (*(int *)(*(long *)(lVar7 + 0xb8) + 0x120) == 2) {
    lVar7 = *(long *)PTR_DAT_06d432c0;
    if (*(int *)(lVar7 + 0xe0) == 0) {
                    /* try { // try from 05824c80 to 05924ca7 has its CatchHandler @ 05824cbc */
      thunk_FUN_02f12b58();
      lVar7 = *(long *)puVar3;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x60);
    if (lVar7 == 0) {
LAB_05824f6c:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
                    /* try { // try from 05824ca8 to 05924cb3 has its CatchHandler @ 058249b8 */
    if ((*(int *)(lVar7 + 0x18) == 0) ||
       (*(undefined4 *)(lVar7 + 0x68) = 0x40, *(int *)(lVar7 + 0x18) == 1)) {
LAB_05824f68:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    *(undefined4 *)(lVar7 + 0xd0) = 0x40;
                    /* try { // try from 05824cb4 to 05924cbb has its CatchHandler @ 05824cbc */
    lVar7 = FUN_05810788(0);
    puVar4 = PTR_DAT_06d5e908;
    puVar2 = PTR_DAT_06d36fa0;
    puVar1 = PTR_DAT_06d01eb0;
    if (lVar7 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05824c80 with catch @ 05824cbc
                       catch(type#2 @ 00000000) { ... } // from try @ 05824cb4 with catch @ 05824cbc
                        */
      iVar13 = 0;
      do {
        iVar5 = FUN_0580a1c4(lVar7,iVar13,0);
        if ((iVar5 == 2) && (uVar8 = FUN_0580a1e8(lVar7,iVar13,0), (uVar8 & 1) != 0)) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar9 = FUN_05829730(7000,iVar13);
          uVar8 = thunk_FUN_05464b70(uVar9,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48)
                                     ,0);
          if ((uVar8 & 1) == 0) {
            lVar10 = *(long *)puVar3;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
              lVar10 = *(long *)puVar3;
            }
            uVar8 = thunk_FUN_05464b70(uVar9,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x50),0);
            if ((uVar8 & 1) == 0) {
              lVar10 = *(long *)puVar3;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
                lVar10 = *(long *)puVar3;
              }
              uVar8 = thunk_FUN_05464b70(uVar9,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x58),0);
              uVar9 = 3;
              if ((uVar8 & 1) == 0) {
                uVar9 = 0;
              }
            }
            else {
              uVar9 = 2;
            }
          }
          else {
            uVar9 = 1;
          }
          iVar5 = FUN_0580a1a0(lVar7,iVar13,0);
          if (iVar5 == 2) {
            lVar10 = *(long *)puVar3;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
              lVar10 = *(long *)puVar3;
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x60);
            if (lVar10 == 0) goto LAB_05824f6c;
            if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_05824f68;
            uVar14 = *(undefined8 *)puVar4;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            uVar14 = FUN_056109c0(uVar14,0);
            lVar11 = *(long *)puVar2;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_02f12b58(lVar11);
            }
            uVar6 = thunk_FUN_02f337c0(uVar14,0);
            ExitGames_Client_Photon_Protocol16__DeserializeDictionaryArray
                      (lVar7,iVar13,lVar10 + 0x88,uVar6,0);
            lVar10 = *(long *)(*(long *)puVar3 + 0xb8);
            lVar11 = *(long *)(lVar10 + 0x60);
            if (lVar11 == 0) goto LAB_05824f6c;
            if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_05824f68;
            *(int *)(lVar11 + 0xd0) = iVar13;
            *(undefined8 *)(lVar11 + 200) = uVar9;
            uVar12 = *(uint *)(lVar10 + 0x14) | 2;
          }
          else {
            if (iVar5 != 1) goto LAB_05824f40;
            lVar10 = *(long *)puVar3;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
              lVar10 = *(long *)puVar3;
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x60);
            if (lVar10 == 0) goto LAB_05824f6c;
            if (*(int *)(lVar10 + 0x18) == 0) goto LAB_05824f68;
            uVar14 = *(undefined8 *)puVar4;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            uVar14 = FUN_056109c0(uVar14,0);
            lVar11 = *(long *)puVar2;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_02f12b58(lVar11);
            }
            uVar6 = thunk_FUN_02f337c0(uVar14,0);
            ExitGames_Client_Photon_Protocol16__DeserializeDictionaryArray
                      (lVar7,iVar13,lVar10 + 0x20,uVar6,0);
            lVar10 = *(long *)(*(long *)puVar3 + 0xb8);
            lVar11 = *(long *)(lVar10 + 0x60);
            if (lVar11 == 0) goto LAB_05824f6c;
            if (*(int *)(lVar11 + 0x18) == 0) goto LAB_05824f68;
            *(int *)(lVar11 + 0x68) = iVar13;
            *(undefined8 *)(lVar11 + 0x60) = uVar9;
            uVar12 = *(uint *)(lVar10 + 0x14) | 1;
          }
          *(uint *)(lVar10 + 0x14) = uVar12;
        }
LAB_05824f40:
        iVar13 = iVar13 + 1;
      } while (iVar13 != 0x40);
    }
  }
  return;
}


