/*
FUNCTION_NAME: FUN_034fca44
ENTRY_POINT: 034fca44
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_20;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_034fca44(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long *plVar16;
  
                    /* catch() { ... } // from try @ 034fca34 with catch @ 034fca48 */
                    /* try { // try from 034fca54 to 035fca5f has its CatchHandler @ 034fca74 */
                    /* try { // try from 034fca60 to 035fca6b has its CatchHandler @ 034fc4b4 */
                    /* try { // try from 034fca6c to 035fca73 has its CatchHandler @ 034fca74 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034fca54 with catch @ 034fca74
                       catch(type#2 @ 00000000) { ... } // from try @ 034fca6c with catch @ 034fca74
                        */
  if ((DAT_03ff6d5d & 1) == 0) {
                    /* try { // try from 034fca80 to 035fcaeb has its CatchHandler @ 034fca80
                       catch() { ... } // from try @ 034fca80 with catch @ 034fca80
                       catch() { ... } // from try @ 034fcb2c with catch @ 034fca80
                       catch() { ... } // from try @ 034fcb84 with catch @ 034fca80
                       catch() { ... } // from try @ 034fcbcc with catch @ 034fca80 */
    thunk_FUN_01ad9084(PTR_DAT_03d95948);
    thunk_FUN_01ad9084(PTR_DAT_03d95950);
    thunk_FUN_01ad9084(PTR_DAT_03d95958);
    thunk_FUN_01ad9084(StringLiteral_362);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_3__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_BD199D44CC5FFF41A1C37FD35241A5024EC5E6A11274C19A47669D388401995D
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_0E499E7743BCDFF289B85890E4DFDD635594DB16246DC094C3C19556B6C1262C
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__26_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__
                      );
                    /* try { // try from 034fcaec to 035fcb07 has its CatchHandler @ 034fcb88 */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff6d5d = 1;
  }
  puVar5 = StringLiteral_362;
  puVar4 = Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__;
  if (param_2 != 0) {
    uVar7 = FUN_03b26064(param_2,0);
    puVar3 = PTR_DAT_03d95958;
    if ((uVar7 & 1) == 0) {
LAB_034fcbbc:
      puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
                    /* try { // try from 034fcbc0 to 035fcbcb has its CatchHandler @ 034fcbe0 */
                    /* try { // try from 034fcbcc to 035fcbd7 has its CatchHandler @ 034fca80 */
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      puVar6 = PTR_DAT_03d95950;
                    /* try { // try from 034fcbd8 to 035fcbdf has its CatchHandler @ 034fcbe0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034fcbc0 with catch @ 034fcbe0
                       catch(type#2 @ 00000000) { ... } // from try @ 034fcbd8 with catch @ 034fcbe0
                        */
                    /* try { // try from 034fcbe4 to 035fcdb3 has its CatchHandler @ 034fcbe4
                       catch() { ... } // from try @ 034fcbe4 with catch @ 034fcbe4
                       catch() { ... } // from try @ 034fcfb4 with catch @ 034fcbe4
                       catch() { ... } // from try @ 034fd1a0 with catch @ 034fcbe4
                       catch() { ... } // from try @ 034fd25c with catch @ 034fcbe4
                       catch() { ... } // from try @ 034fd264 with catch @ 034fcbe4
                       catch() { ... } // from try @ 034fd274 with catch @ 034fcbe4
                       catch() { ... } // from try @ 034fd374 with catch @ 034fcbe4
                       catch() { ... } // from try @ 034fd424 with catch @ 034fcbe4 */
      uVar10 = FUN_03922f24(param_3,0,0);
      if ((uVar10 & 1) == 0) {
        uVar9 = *(undefined8 *)(param_2 + 0x20);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar10 = FUN_03922f24(uVar9,0,0);
        if ((uVar10 & 1) == 0) {
LAB_034fcd20:
          plVar16 = (long *)(param_2 + 0x20);
          lVar8 = *plVar16;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar10 = FUN_03922f24(lVar8,param_3,0);
          if ((uVar10 & 1) != 0) {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar10 = FUN_03923030(param_3,0);
            if ((uVar10 & 1) != 0) {
              return;
            }
          }
          lVar8 = FUN_03b2b53c(*plVar16,param_3,0);
          if (lVar8 == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = FUN_0391fab4(lVar8,0);
          }
          lVar8 = *plVar16;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
                    /* try { // try from 034fcdb4 to 035fcddb has its CatchHandler @ 034fd374 */
          uVar10 = FUN_0391f968(lVar8,0,0);
          if ((uVar10 & 1) == 0) {
LAB_034fcec8:
            *plVar16 = param_3;
            thunk_FUN_01b4f09c(plVar16,param_3);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
                    /* try { // try from 034fcef0 to 035fcef3 has its CatchHandler @ 034fd2a4 */
                    /* try { // try from 034fcef4 to 035fcf03 has its CatchHandler @ 034fd2c0 */
            uVar10 = FUN_0391f968(param_3,0,0);
            if ((uVar10 & 1) == 0) {
              return;
            }
            if (param_3 != 0) {
              lVar8 = FUN_0391fab4(param_3,0);
              puVar6 = PTR_DAT_03d95948;
              puVar4 = Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_3__;
                    /* try { // try from 034fcf18 to 035fcf1b has its CatchHandler @ 034fd2a0 */
                    /* try { // try from 034fcf1c to 035fcf2b has its CatchHandler @ 034fd2ac */
              while( true ) {
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                    /* try { // try from 034fcf44 to 035fcf47 has its CatchHandler @ 034fd29c */
                uVar10 = FUN_0391f968(lVar8,0,0);
                if ((uVar10 & 1) == 0) {
                  return;
                }
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar10 = FUN_0391f968(lVar8,uVar9,0);
                if ((uVar10 & 1) == 0) {
                  return;
                }
                    /* try { // try from 034fcf74 to 035fcf83 has its CatchHandler @ 034fd27c */
                uVar10 = FUN_034fc944(param_1,lVar8);
                if ((uVar10 & 1) != 0) {
                  return;
                }
                if (lVar8 == 0) break;
                    /* try { // try from 034fcf8c to 035fcf9b has its CatchHandler @ 034fd288 */
                uVar11 = FUN_0391c2b8(lVar8,0);
                if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)puVar5);
                }
                    /* try { // try from 034fcfac to 035fcfb3 has its CatchHandler @ 034fd28c */
                if (DAT_03ff6dc1 == '\0') {
                    /* try { // try from 034fcfb4 to 035fd0a7 has its CatchHandler @ 034fcbe4 */
                  thunk_FUN_01ad9084(puVar5);
                  DAT_03ff6dc1 = '\x01';
                }
                lVar12 = *(long *)puVar5;
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar12 = *(long *)puVar5;
                }
                FUN_01ecfb94(uVar11,param_2,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),
                             *(undefined8 *)puVar6);
                if ((uVar7 & 1) != 0) {
                  uVar11 = FUN_0391c2b8(lVar8,0);
                  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*(long *)puVar5);
                  }
                  if (DAT_03ff6dc0 == '\0') {
                    thunk_FUN_01ad9084(puVar5);
                    DAT_03ff6dc0 = '\x01';
                  }
                  lVar12 = *(long *)puVar5;
                  if (*(int *)(lVar12 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    lVar12 = *(long *)puVar5;
                  }
                  FUN_01ecfb94(uVar11,param_2,**(undefined8 **)(lVar12 + 0xb8),
                               *(undefined8 *)PTR_DAT_03d95958);
                }
                lVar12 = *(long *)(param_2 + 0xf0);
                uVar11 = FUN_0391c2b8(lVar8,0);
                if (lVar12 == 0) break;
                lVar13 = *(long *)(lVar12 + 0x10);
                lVar14 = *(long *)puVar4;
                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                if (lVar13 == 0) break;
                uVar2 = *(uint *)(lVar12 + 0x18);
                if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                    /* try { // try from 034fd0a8 to 035fd0cf has its CatchHandler @ 034fd2b0 */
                  *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                  *(undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
                  thunk_FUN_01b4f09c();
                }
                else {
                  FUN_02b599e4(lVar12,uVar11,
                               *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                }
                lVar8 = FUN_03928c2c(lVar8,0);
              }
            }
          }
          else if (*plVar16 != 0) {
            lVar8 = FUN_0391fab4(*plVar16,0);
            puVar4 = 
            Field_<PrivateImplementationDetails>_0E499E7743BCDFF289B85890E4DFDD635594DB16246DC094C3C19556B6C1262C
            ;
            while( true ) {
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar10 = FUN_0391f968(lVar8,0,0);
              if ((uVar10 & 1) == 0) goto LAB_034fcec8;
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
                    /* try { // try from 034fce10 to 035fce73 has its CatchHandler @ 034fd380 */
              uVar10 = FUN_0391f968(lVar8,uVar9,0);
              if ((uVar10 & 1) == 0) goto LAB_034fcec8;
              if (lVar8 == 0) break;
              uVar11 = FUN_0391c2b8(lVar8,0);
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)puVar5);
              }
              if (DAT_03ff1eb4 == '\0') {
                thunk_FUN_01ad9084(puVar5);
                DAT_03ff1eb4 = '\x01';
              }
              lVar12 = *(long *)puVar5;
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar12 = *(long *)puVar5;
              }
                    /* try { // try from 034fce88 to 035fce93 has its CatchHandler @ 034fd2bc */
              FUN_01ecfb94(uVar11,param_2,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10),
                           *(undefined8 *)puVar6);
              lVar12 = *(long *)(param_2 + 0xf0);
              uVar11 = FUN_0391c2b8(lVar8,0);
              if (lVar12 == 0) break;
                    /* try { // try from 034fcea4 to 035fceab has its CatchHandler @ 034fd2cc */
              FUN_02b5ae30(lVar12,uVar11,*(undefined8 *)puVar4);
              lVar8 = FUN_03928c2c(lVar8,0);
            }
          }
          goto LAB_034fd104;
        }
      }
      lVar8 = *(long *)(param_2 + 0xf0);
      if (lVar8 != 0) {
        iVar15 = 0;
        do {
          iVar1 = *(int *)(lVar8 + 0x18);
          if (iVar1 <= iVar15) {
            *(undefined4 *)(lVar8 + 0x18) = 0;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (0 < iVar1) {
              FUN_03062488(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
            }
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar10 = FUN_03922f24(param_3,0,0);
            if ((uVar10 & 1) != 0) {
              *(undefined8 *)(param_2 + 0x20) = 0;
              thunk_FUN_01b4f09c((undefined8 *)(param_2 + 0x20),0);
              return;
            }
            goto LAB_034fcd20;
          }
          uVar9 = FUN_02b59714(lVar8,iVar15,*(undefined8 *)puVar4);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar5);
          }
          if (DAT_03ff1eb4 == '\0') {
            thunk_FUN_01ad9084(puVar5);
            DAT_03ff1eb4 = '\x01';
          }
          lVar8 = *(long *)puVar5;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar8 = *(long *)puVar5;
          }
          FUN_01ecfb94(uVar9,param_2,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10),
                       *(undefined8 *)puVar6);
          lVar8 = *(long *)(param_2 + 0xf0);
          iVar15 = iVar15 + 1;
        } while (lVar8 != 0);
      }
    }
    else {
      lVar8 = *(long *)(param_2 + 0xf0);
                    /* try { // try from 034fcb24 to 035fcb2b has its CatchHandler @ 034fcb8c */
      if (lVar8 != 0) {
                    /* try { // try from 034fcb2c to 035fcb7f has its CatchHandler @ 034fca80 */
        iVar15 = 0;
        do {
          if (*(int *)(lVar8 + 0x18) <= iVar15) goto LAB_034fcbbc;
          uVar9 = FUN_02b59714(lVar8,iVar15,*(undefined8 *)puVar4);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar5);
          }
          if (DAT_03ff6dc0 == '\0') {
            thunk_FUN_01ad9084(puVar5);
            DAT_03ff6dc0 = '\x01';
          }
                    /* try { // try from 034fcb80 to 035fcb83 has its CatchHandler @ 034fcb84 */
          lVar8 = *(long *)puVar5;
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 034fcb80 with catch @ 034fcb84
                       try { // try from 034fcb84 to 035fcba3 has its CatchHandler @ 034fca80 */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 034fcaec with catch @ 034fcb88
                        */
          if (*(int *)(lVar8 + 0xe0) == 0) {
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 034fcb24 with catch @ 034fcb8c
                        */
            thunk_FUN_01ac7298();
            lVar8 = *(long *)puVar5;
          }
                    /* try { // try from 034fcba4 to 035fcba7 has its CatchHandler @ 034fcbb4 */
          FUN_01ecfb94(uVar9,param_2,**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)puVar3);
          lVar8 = *(long *)(param_2 + 0xf0);
          iVar15 = iVar15 + 1;
                    /* catch() { ... } // from try @ 034fcba4 with catch @ 034fcbb4 */
        } while (lVar8 != 0);
      }
    }
  }
LAB_034fd104:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034fd104 to 035fd167 has its CatchHandler @ 034fd2d0 */
  FUN_01b48178();
}


