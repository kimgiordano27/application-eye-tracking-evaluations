/*
FUNCTION_NAME: FUN_01c67de0
ENTRY_POINT: 01c67de0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void FUN_01c67de0(float param_1,undefined1 param_2 [16],float param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
                    /* try { // try from 01c67de8 to 01d67df3 has its CatchHandler @ 01c67df8 */
                    /* try { // try from 01c67df4 to 01d67e53 has its CatchHandler @ 01c67c74 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c67de8 with catch @ 01c67df8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c67ccc with catch @ 01c67dfc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c67d34 with catch @ 01c67e04
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c67d74 with catch @ 01c67e08
                        */
  if ((DAT_03fed6ec & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c67cf0 with catch @ 01c67e10
                        */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed6ec = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_4 + 200) != '\0') {
    uVar7 = *(undefined8 *)(param_4 + 0xd8);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
                    /* try { // try from 01c67e54 to 01d67e57 has its CatchHandler @ 01c67e58 */
    uVar2 = FUN_0391f968(uVar7,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_4 + 0xd8) == 0) goto LAB_01c68348;
      uVar2 = FUN_0395b350(*(long *)(param_4 + 0xd8),0);
      if ((uVar2 & 1) == 0) {
        *(undefined2 *)(param_4 + 0x78) = 0;
        *(undefined2 *)(param_4 + 200) = 0;
        return;
      }
    }
    if (*(char *)(param_4 + 200) == '\0') {
      return;
    }
    fVar14 = *(float *)(param_4 + 0x40);
    if (fVar14 < *(float *)(param_4 + 0xb0)) {
      if (*(char *)(param_4 + 0xc9) == '\0') {
        if (*(long *)(param_4 + 0x58) != 0) {
          fVar9 = (float)FUN_03928d34(*(long *)(param_4 + 0x58),0);
          if (*(long *)(param_4 + 0x50) != 0) {
            fVar11 = fVar14;
            fVar15 = param_3;
            fVar10 = (float)FUN_03928d34(*(long *)(param_4 + 0x50),0);
            fVar16 = *(float *)(param_4 + 0x3c);
            fVar14 = fVar14 - fVar11;
            param_3 = param_3 - fVar15;
            FUN_01c68628(param_4,0);
            uVar7 = *(undefined8 *)(param_4 + 0x88);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            fVar9 = fVar16 * (fVar9 - fVar10);
            fVar14 = fVar16 * fVar14;
            fVar16 = fVar16 * param_3;
            uVar2 = FUN_03923030(uVar7,0);
            if ((uVar2 & 1) == 0) {
              uVar7 = *(undefined8 *)(param_4 + 0x80);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar2 = FUN_03923030(uVar7,0);
              if ((uVar2 & 1) == 0) {
                return;
              }
              lVar3 = *(long *)(param_4 + 0x80);
              fVar11 = (float)FUN_03925cf4(0);
              if (lVar3 != 0) {
                FUN_0395b9a4(fVar9 * fVar11 * param_1,fVar14 * fVar11 * param_1,
                             fVar16 * fVar11 * param_1,lVar3,0);
                return;
              }
            }
            else {
              plVar8 = *(long **)(param_4 + 0x88);
              if (plVar8 != (long *)0x0) {
                if ((int)plVar8[4] != 1) {
                  if ((int)plVar8[4] != 0) {
                    return;
                  }
                  fVar11 = (float)FUN_03925cf4(0);
                    /* WARNING: Could not recover jumptable at 0x01c68180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*plVar8 + 0x208))
                            (fVar9 * fVar11 * param_1,fVar14 * fVar11 * param_1,
                             fVar16 * fVar11 * param_1,plVar8,*(undefined8 *)(*plVar8 + 0x210));
                  return;
                }
                iVar5 = *(int *)(param_4 + 0x48);
                lVar3 = *(long *)(param_4 + 0xa0);
                if (iVar5 == 2) {
                  if (lVar3 != 0) {
                    fVar10 = (float)FUN_03959e50(lVar3,0);
                    fVar12 = *(float *)(param_4 + 0x44);
                    fVar13 = (float)FUN_03925dbc(0);
                    fVar9 = fVar9 * fVar12 * fVar13;
                    fVar14 = fVar14 * fVar12 * fVar13;
                    fVar13 = fVar16 * fVar12 * fVar13;
                    if (DAT_03fed51c == '\0') {
                      thunk_FUN_01ad9084(
                                        Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                                        );
                      DAT_03fed51c = '\x01';
                    }
                    fVar12 = fVar9 - fVar10;
                    fVar18 = fVar14 - fVar11;
                    fVar17 = fVar13 - fVar15;
                    fVar16 = fVar17 * fVar17 + fVar12 * fVar12 + fVar18 * fVar18;
                    if ((fVar16 != 0.0) && (1.0 < fVar16)) {
                      if (*(int *)(*(long *)
                                    Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                                  + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      fVar16 = SQRT(fVar16);
                      fVar9 = fVar10 + fVar12 / fVar16;
                      fVar13 = fVar15 + fVar17 / fVar16;
                      fVar14 = fVar11 + fVar18 / fVar16;
                    }
                    FUN_03959ef0(fVar9,fVar14,fVar13,lVar3,0);
                    return;
                  }
                }
                else if (lVar3 != 0) {
                  fVar11 = *(float *)(param_4 + 0x44);
                  fVar16 = fVar16 * fVar11;
                  fVar14 = fVar14 * fVar11;
                  fVar9 = fVar9 * fVar11;
                  goto LAB_01c67f3c;
                }
              }
            }
          }
        }
      }
      else if (*(long *)(param_4 + 0xd0) != 0) {
        FUN_0395a360(*(long *)(param_4 + 0xd0),0,0);
        if ((*(long *)(param_4 + 0xd0) != 0) &&
           (lVar3 = FUN_0391c27c(*(long *)(param_4 + 0xd0),0), lVar3 != 0)) {
          FUN_039294c8(lVar3,*(undefined8 *)(param_4 + 0xe0),0);
          if (*(long *)(param_4 + 0xd0) != 0) {
            FUN_0395a294(*(long *)(param_4 + 0xd0),0,0);
            if (*(long *)(param_4 + 0x50) != 0) {
              lVar3 = *(long *)(param_4 + 0xd0);
              fVar9 = (float)FUN_03928d34(*(long *)(param_4 + 0x50),0);
              if (((*(long *)(param_4 + 0xd0) != 0) &&
                  (fVar11 = param_3, fVar15 = fVar14,
                  lVar4 = FUN_0391c27c(*(long *)(param_4 + 0xd0),0), lVar4 != 0)) &&
                 (fVar10 = (float)FUN_03928d34(lVar4,0), lVar3 != 0)) {
                fVar16 = (param_3 - fVar11) * DAT_00b55290;
                fVar14 = (fVar14 - fVar15) * DAT_00b55290;
                fVar9 = (fVar9 - fVar10) * DAT_00b55290;
                iVar5 = 2;
LAB_01c67f3c:
                FUN_0395ae9c(fVar9,fVar14,fVar16,lVar3,iVar5,0);
                return;
              }
            }
          }
        }
      }
      goto LAB_01c68348;
    }
    if (fVar14 < *(float *)(param_4 + 0xb0)) {
      return;
    }
    if (*(char *)(param_4 + 0xc9) != '\0') {
      lVar3 = *(long *)(param_4 + 0xd0);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      if (lVar3 == 0) goto LAB_01c68348;
      puVar6 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      FUN_03959ef0(*puVar6,puVar6[1],puVar6[2],lVar3,0);
      if (*(long *)(param_4 + 0xd0) == 0) goto LAB_01c68348;
      FUN_0395a360(*(long *)(param_4 + 0xd0),1,0);
      if (*(long *)(param_4 + 0xd0) == 0) goto LAB_01c68348;
      lVar3 = FUN_0391c27c(*(long *)(param_4 + 0xd0),0);
      uVar7 = FUN_0391c27c(param_4,0);
      if (lVar3 == 0) goto LAB_01c68348;
      FUN_039294c8(lVar3,uVar7,0);
    }
    if ((*(char *)(param_4 + 0xe9) == '\0') && (*(char *)(param_4 + 0xc9) == '\0')) {
      if (*(long *)(param_4 + 0xf0) != 0) {
        lVar3 = FUN_0391c27c(*(long *)(param_4 + 0xf0),0);
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        if (lVar3 != 0) {
          puVar6 = *(undefined4 **)
                    (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
          FUN_039282dc(*puVar6,puVar6[1],puVar6[2],lVar3,0);
          plVar8 = *(long **)(param_4 + 0x98);
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x178))
                      (plVar8,*(undefined8 *)(param_4 + 0xf0),*(undefined8 *)(param_4 + 0x28),
                       *(undefined8 *)(*plVar8 + 0x180));
            *(undefined1 *)(param_4 + 0xe9) = 1;
            return;
          }
        }
      }
LAB_01c68348:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return;
}


