/*
FUNCTION_NAME: FUN_0717c258
ENTRY_POINT: 0717c258
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Type propagation algorithm not settling */

ulong FUN_0717c258(long param_1,long param_2,int param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ushort local_50 [2];
  int local_4c;
  long local_48;
  
  uVar16 = (ulong)param_4;
  local_50[0] = (ushort)param_4;
  local_4c = param_3;
  local_48 = param_2;
  if ((DAT_082680e4 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d89e28);
    FUN_0373b518(PTR_DAT_07d86398);
    FUN_0373b518(PTR_DAT_07d8c7d8);
    FUN_0373b518(PTR_DAT_07d8d790);
    FUN_0373b518(
                System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                );
    DAT_082680e4 = 1;
  }
  if (*(int *)(param_1 + 0x188) == 0) {
    return uVar16;
  }
  uVar13 = FUN_075a6abc(param_1,0);
  if ((uVar13 & 1) == 0) {
    return uVar16;
  }
  switch(*(undefined4 *)(param_1 + 0x188)) {
  case 2:
  case 3:
    if (param_3 == 0) {
      if (param_2 == 0) goto LAB_0717ca4c;
      if (*(int *)(param_2 + 0x10) < 1) goto LAB_0717c31c;
                    /* try { // try from 0717c610 to 0727c63f has its CatchHandler @ 0717c7dc */
      sVar7 = FUN_060bb390(param_2,0,0);
      bVar4 = sVar7 == 0x2d;
    }
    else {
LAB_0717c31c:
      bVar4 = false;
    }
    iVar11 = *(int *)(param_1 + 0x224);
    iVar12 = FUN_071768f4(param_1);
    if (iVar12 + iVar11 == 0) {
      bVar5 = true;
    }
    else {
      iVar11 = *(int *)(param_1 + 0x228);
      iVar12 = FUN_071768f4(param_1);
                    /* try { // try from 0717c654 to 0727c65b has its CatchHandler @ 0717c7d0 */
      bVar5 = iVar12 + iVar11 == 0;
    }
    if (!bVar4) {
                    /* try { // try from 0717c674 to 0727c67b has its CatchHandler @ 0717c7e4 */
      if ((param_4 - 0x30 & 0xffff) < 10) {
        return uVar16;
      }
                    /* try { // try from 0717c694 to 0727c6b3 has its CatchHandler @ 0717c7d4 */
      if (((param_4 & 0xffff) == 0x2d) && (bVar5 || param_3 == 0)) {
        return 0x2d;
      }
      lVar15 = FUN_062af240(0);
                    /* try { // try from 0717c6c0 to 0727c6c7 has its CatchHandler @ 0717c7cc */
      if (((lVar15 != 0) && (plVar14 = (long *)FUN_062b0884(lVar15,0), plVar14 != (long *)0x0)) &&
         (lVar15 = (**(code **)(*plVar14 + 0x218))(plVar14,*(undefined8 *)(*plVar14 + 0x220)),
         lVar15 != 0)) {
        uVar18 = *(undefined8 *)(lVar15 + 0x38);
        if (*(int *)(*(long *)PTR_DAT_07d89e28 + 0xe4) == 0) {
          thunk_FUN_03798b70(*(long *)PTR_DAT_07d89e28);
        }
        uVar9 = FUN_061b225c(uVar18,0);
                    /* try { // try from 0717c708 to 0727c743 has its CatchHandler @ 0717c7e4 */
        if ((uVar9 & 0xffff) != (param_4 & 0xffff)) {
          return 0;
        }
        if (*(int *)(param_1 + 0x188) != 3) {
          return 0;
        }
        if (param_2 != 0) {
          uVar16 = FUN_060c5b28(param_2,uVar18,0);
          uVar9 = 0;
          if ((uVar16 & 1) == 0) {
            uVar9 = param_4;
          }
          return (ulong)uVar9;
        }
      }
LAB_0717ca4c:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    break;
  case 4:
    if ((param_4 - 0x41 & 0xffff) < 0x1a) {
      return uVar16;
    }
    if ((param_4 - 0x61 & 0xffff) < 0x1a) {
      return uVar16;
    }
  case 1:
    if (0x2f < (param_4 & 0xffff)) {
      if (0x39 < (param_4 & 0xffff)) {
        param_4 = 0;
      }
      return (ulong)param_4;
    }
    break;
  case 5:
    if (param_2 != 0) {
      iVar11 = *(int *)(param_2 + 0x10);
      if (iVar11 < 1) {
        sVar7 = 10;
        uVar10 = 0x20;
        uVar9 = 0x20;
      }
      else {
        iVar2 = param_3 + -1;
        iVar12 = iVar2;
        if (iVar11 <= iVar2) {
          iVar12 = iVar11 + -1;
        }
        iVar11 = 0;
        if (-1 < iVar2) {
          iVar11 = iVar12;
        }
        uVar9 = FUN_060bb390(param_2,iVar11,0);
        iVar11 = *(int *)(param_2 + 0x10);
        if (iVar11 < 1) {
          sVar7 = 10;
                    /* try { // try from 0717c744 to 0727c7c7 has its CatchHandler @ 0717c460 */
          uVar10 = 0x20;
        }
        else {
          iVar12 = param_3;
          if (iVar11 <= param_3) {
            iVar12 = iVar11 + -1;
          }
          iVar11 = 0;
          if (-1 < param_3) {
            iVar11 = iVar12;
          }
          uVar10 = FUN_060bb390(param_2,iVar11,0);
          iVar12 = *(int *)(param_2 + 0x10);
          iVar11 = iVar12 + -1;
          if (iVar12 < 1) {
            sVar7 = 10;
          }
          else {
            if (param_3 + 1 < iVar12) {
              iVar11 = param_3 + 1;
            }
            iVar12 = 0;
            if (-1 < param_3 + 1) {
              iVar12 = iVar11;
            }
            sVar7 = FUN_060bb390(param_2,iVar12,0);
          }
        }
      }
      puVar3 = PTR_DAT_07d86548;
      if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0x88) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar13 = FUN_061ae240(uVar16,0);
      if ((uVar13 & 1) != 0) {
        if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        bVar6 = FUN_061ae3d8(uVar16,0);
        if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        if ((bVar6 & param_3 == 0) == 0) {
          uVar13 = FUN_061ae3d8(uVar16,0);
          if (((uVar13 & 1) == 0) || (((uVar9 & 0xffff) != 0x2d && ((uVar9 & 0xffff) != 0x20)))) {
            if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            uVar13 = FUN_061ae338(uVar16,0);
            if (((((uVar9 & 0xffff) != 0x2d) && ((uVar9 & 0xffff) != 0x27)) &&
                ((uVar9 & 0xffff) != 0x20)) && ((0 < param_3 && ((uVar13 & 1) != 0)))) {
              if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              uVar13 = FUN_061ae3d8(uVar9,0);
              if ((uVar13 & 1) == 0) {
                if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_03798b70();
                }
                uVar16 = FUN_061ae7dc(uVar16,0);
                return uVar16;
              }
            }
            if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            uVar13 = FUN_061ae338(uVar16,0);
            if ((uVar13 & 1) != 0) {
              if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              uVar13 = FUN_061ae338(uVar10,0);
              if ((uVar13 & 1) != 0) {
                return 0;
              }
              return uVar16;
            }
            return uVar16;
          }
          if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
        }
                    /* try { // try from 0717c7c8 to 0727c7cb has its CatchHandler @ 0717c7e0 */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 0717c6c0 with catch @ 0717c7cc
                       try { // try from 0717c7cc to 0727c7fb has its CatchHandler @ 0717c460 */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 0717c654 with catch @ 0717c7d0
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 0717c694 with catch @ 0717c7d4
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 0717c568 with catch @ 0717c7d8
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 0717c610 with catch @ 0717c7dc
                        */
        uVar16 = FUN_061ae664(uVar16,0);
        return uVar16;
      }
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 0717c5b0 with catch @ 0717c7e0
                       catch(type#1 @ 078dda18) { ... } // from try @ 0717c7c8 with catch @ 0717c7e0
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 0717c674 with catch @ 0717c7e4
                       catch(type#1 @ 078dda18) { ... } // from try @ 0717c708 with catch @ 0717c7e4
                        */
                    /* try { // try from 0717c7fc to 0727c7ff has its CatchHandler @ 0717c80c */
                    /* catch() { ... } // from try @ 0717c7fc with catch @ 0717c80c */
      if ((((sVar7 != 0x27) && ((uVar10 & 0xffff) != 0x27)) && ((uVar10 & 0xffff) != 0x20)) &&
         (((param_4 & 0xffff) == 0x27 &&
          (uVar13 = FUN_060c5b28(param_2,*(undefined8 *)PTR_DAT_07d8d790,0), (uVar13 & 1) == 0)))) {
        return 0x27;
      }
      if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar13 = FUN_061ae240(uVar9,0);
                    /* try { // try from 0717c844 to 0727c86b has its CatchHandler @ 0717c880 */
      if ((((uVar10 & 0xffff) != 0x2d) && ((uVar13 & 1) != 0)) && ((param_4 & 0xffff) == 0x2d)) {
        return uVar16;
      }
                    /* try { // try from 0717c86c to 0727c877 has its CatchHandler @ 0717c460 */
                    /* try { // try from 0717c878 to 0727c87f has its CatchHandler @ 0717c880 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0717c844 with catch @ 0717c880
                       catch(type#2 @ 00000000) { ... } // from try @ 0717c878 with catch @ 0717c880
                        */
      if ((uVar9 & 0xffff) == 0x27) {
        return 0;
      }
      if ((uVar9 & 0xffff) == 0x20) {
        return 0;
      }
      if (param_3 == 0) {
        return 0;
      }
      if ((param_4 & 0xffff) == 0x20 || (param_4 & 0xffff) == 0x2d) {
        if ((uVar9 & 0xffff) == 0x2d) {
          return 0;
        }
        if ((uVar10 & 0xffff) == 0x20) {
          return 0;
        }
        if ((uVar10 & 0xffff) == 0x27) {
          return 0;
        }
        if ((uVar10 & 0xffff) != 0x2d) {
          if ((sVar7 == 0x27) != (sVar7 != 0x20)) {
            uVar9 = 0;
            if (sVar7 != 0x2d) {
              uVar9 = param_4;
            }
            return (ulong)uVar9;
          }
          return 0;
        }
        return 0;
      }
      return 0;
    }
    goto LAB_0717ca4c;
  case 6:
    if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0x88) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar18 = FUN_0619e108(local_50,0);
    uVar17 = *(undefined8 *)(param_1 + 400);
    if (*(int *)(*(long *)PTR_DAT_07d8c7d8 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07d8c7d8);
    }
    uVar16 = FUN_06aa49d4(uVar18,uVar17,0);
    uVar9 = (uint)local_50[0];
    if ((uVar16 & 1) == 0) {
      uVar9 = 0;
    }
    return (ulong)uVar9;
  case 7:
                    /* try { // try from 0717c460 to 0727c567 has its CatchHandler @ 0717c460
                       catch() { ... } // from try @ 0717c460 with catch @ 0717c460
                       catch() { ... } // from try @ 0717c744 with catch @ 0717c460
                       catch() { ... } // from try @ 0717c7cc with catch @ 0717c460
                       catch() { ... } // from try @ 0717c86c with catch @ 0717c460 */
    if ((param_4 - 0x30 & 0xffff) < 10) {
      return uVar16;
    }
    if ((param_4 - 0x41 & 0xffff) < 0x1a) {
      return uVar16;
    }
    if ((param_4 - 0x61 & 0xffff) < 0x1a) {
      return uVar16;
    }
    if ((param_4 & 0xffff) == 0x40) {
      if (param_2 == 0) goto LAB_0717ca4c;
      iVar11 = FUN_060c5ba4(param_2,0x40,0);
      if (iVar11 == -1) {
        return 0x40;
      }
    }
    if (*(long *)
         System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
        == 0) goto LAB_0717ca4c;
    iVar11 = FUN_060c5ba4(*(long *)
                           System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                          ,uVar16,0);
    if (iVar11 != -1) {
      return uVar16;
    }
    if ((param_4 & 0xffff) == 0x2e) {
      if (param_2 == 0) goto LAB_0717ca4c;
      iVar11 = *(int *)(param_2 + 0x10);
      if (iVar11 < 1) {
        return 0x2e;
      }
      iVar12 = param_3;
      if (iVar11 <= param_3) {
        iVar12 = iVar11 + -1;
      }
      iVar11 = 0;
      if (-1 < param_3) {
        iVar11 = iVar12;
      }
      sVar7 = FUN_060bb390(param_2,iVar11,0);
      iVar12 = *(int *)(param_2 + 0x10);
      iVar11 = iVar12 + -1;
      if (iVar12 < 1) {
        sVar8 = 10;
      }
      else {
        if (param_3 + 1 < iVar12) {
          iVar11 = param_3 + 1;
        }
        iVar12 = 0;
        if (-1 < param_3 + 1) {
          iVar12 = iVar11;
        }
        sVar8 = FUN_060bb390(param_2,iVar12,0);
      }
      if (sVar7 != 0x2e) {
        uVar9 = 0;
        if (sVar8 != 0x2e) {
          uVar9 = 0x2e;
        }
        return (ulong)uVar9;
      }
    }
    break;
  case 8:
    uVar18 = *(undefined8 *)(param_1 + 0x2e0);
    if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
                    /* try { // try from 0717c568 to 0727c573 has its CatchHandler @ 0717c7d8 */
      thunk_FUN_03798b70();
    }
    uVar13 = FUN_075aa744(uVar18,0,0);
    if ((uVar13 & 1) != 0) {
      plVar14 = *(long **)(param_1 + 0x2e0);
      if (plVar14 != (long *)0x0) {
        uVar16 = (**(code **)(*plVar14 + 0x178))
                           (plVar14,&local_48,&local_4c,uVar16,*(undefined8 *)(*plVar14 + 0x180));
                    /* try { // try from 0717c5b0 to 0727c5df has its CatchHandler @ 0717c7e0 */
        *(long *)(param_1 + 0x210) = local_48;
        thunk_FUN_037aeb94((long *)(param_1 + 0x210));
        piVar1 = (int *)(param_1 + 0x224);
        *(int *)(param_1 + 0x224) = local_4c;
        if (local_4c < 1) {
          piVar1[0] = 0;
          piVar1[1] = 0;
          return uVar16 & 0xffffffff;
        }
        lVar15 = *(long *)(param_1 + 0x210);
        if (lVar15 != 0) {
          if (*(int *)(lVar15 + 0x10) < local_4c) {
            *piVar1 = *(int *)(lVar15 + 0x10);
          }
          *(int *)(param_1 + 0x228) = local_4c;
          iVar11 = *(int *)(lVar15 + 0x10);
          if (local_4c <= *(int *)(lVar15 + 0x10)) {
            iVar11 = local_4c;
          }
          *(int *)(param_1 + 0x228) = iVar11;
          return uVar16 & 0xffffffff;
        }
      }
      goto LAB_0717ca4c;
    }
  }
  return 0;
}


