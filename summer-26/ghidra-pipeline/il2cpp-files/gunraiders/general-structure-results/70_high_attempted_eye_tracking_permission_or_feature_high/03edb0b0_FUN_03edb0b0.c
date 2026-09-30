/*
FUNCTION_NAME: FUN_03edb0b0
ENTRY_POINT: 03edb0b0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_11;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


long * FUN_03edb0b0(long *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int *piVar10;
  long *plVar11;
  uint uVar12;
  
  puVar3 = UnityEngine_Rendering_Universal_IntersectNode_TypeInfo;
  if ((DAT_04543075 & 1) == 0) {
    FUN_01c5d288(StringLiteral_10165);
    FUN_01c5d288(System_Runtime_InteropServices_PreserveSigAttribute_TypeInfo);
    FUN_01c5d288(OVREyeGaze_TypeInfo);
    FUN_01c5d288(StringLiteral_12525);
    FUN_01c5d288(StringLiteral_12526);
    FUN_01c5d288(StringLiteral_12527);
    FUN_01c5d288(StringLiteral_12528);
    FUN_01c5d288(OVRGLTFAccessor_TypeInfo);
    FUN_01c5d288(StringLiteral_12529);
    FUN_01c5d288(StringLiteral_12530);
    FUN_01c5d288(UnityEngine_Rendering_Universal_IntersectNode_TypeInfo);
    FUN_01c5d288(ExitGames_Client_Photon_InvalidDataException_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo);
    DAT_04543075 = 1;
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar4 = *(long *)puVar3;
  }
  if (**(long **)(lVar4 + 0xb8) != 0) {
    uVar5 = FUN_0290ca2c(**(long **)(lVar4 + 0xb8),param_1,*(undefined8 *)StringLiteral_12526);
    if ((uVar5 & 1) == 0) {
      if ((param_1 != (long *)0x0) &&
         (plVar6 = (long *)thunk_FUN_01c5d21c(param_1,0), plVar6 != (long *)0x0)) {
        lVar4 = (**(code **)(*plVar6 + 0x878))(plVar6,*(undefined8 *)(*plVar6 + 0x880));
        if (lVar4 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (0 < (int)uVar1) {
            uVar12 = 0;
            do {
              if (uVar1 <= uVar12) {
LAB_03edb518:
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4ac();
              }
              plVar6 = *(long **)(lVar4 + (long)(int)uVar12 * 8 + 0x20);
              if (plVar6 == (long *)0x0) goto LAB_03edb514;
              uVar5 = (**(code **)(*plVar6 + 0x3b8))(plVar6,*(undefined8 *)(*plVar6 + 0x3c0));
              if ((uVar5 & 1) != 0) {
                lVar7 = *(long *)puVar3;
                if (*(int *)(lVar7 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                  lVar7 = *(long *)puVar3;
                }
                plVar11 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x10);
                uVar8 = (**(code **)(*plVar6 + 0x438))(plVar6,*(undefined8 *)(*plVar6 + 0x440));
                if (plVar11 == (long *)0x0) goto LAB_03edb514;
                uVar5 = (**(code **)(*plVar11 + 0x298))
                                  (plVar11,uVar8,*(undefined8 *)(*plVar11 + 0x2a0));
                if ((uVar5 & 1) != 0) {
                  lVar4 = (**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460));
                  if (lVar4 == 0) goto LAB_03edb514;
                  if (*(int *)(lVar4 + 0x18) == 0) goto LAB_03edb518;
                  uVar8 = *(undefined8 *)(lVar4 + 0x20);
                  goto LAB_03edb2f8;
                }
              }
              uVar1 = *(uint *)(lVar4 + 0x18);
              uVar12 = uVar12 + 1;
            } while ((int)uVar12 < (int)uVar1);
          }
          uVar8 = 0;
LAB_03edb2f8:
          if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar5 = FUN_032ea0d4(uVar8,0,0);
          if ((uVar5 & 1) == 0) {
            plVar6 = (long *)thunk_FUN_01c496e0(*(undefined8 *)StringLiteral_12525);
            FUN_03edb51c();
            if (plVar6 == (long *)0x0) goto LAB_03edb514;
          }
          else {
            lVar4 = FUN_032fbc1c(uVar8,0);
            if (lVar4 == 0) goto LAB_03edb514;
            uVar8 = *(undefined8 *)ExitGames_Client_Photon_InvalidDataException_TypeInfo;
            plVar6 = (long *)thunk_FUN_01c495e4(lVar4,uVar8);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d748(lVar4,uVar8);
            }
          }
          lVar4 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)ExitGames_Client_Photon_InvalidDataException_TypeInfo) {
                puVar9 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_03edb3d0;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar9 = (undefined8 *)
                   FUN_01c72498(plVar6,*(long *)
                                        ExitGames_Client_Photon_InvalidDataException_TypeInfo,0);
LAB_03edb3d0:
          (*(code *)*puVar9)(plVar6,param_1,puVar9[1]);
          lVar4 = *param_1;
          bVar2 = *(byte *)(*(long *)System_Runtime_InteropServices_PreserveSigAttribute_TypeInfo +
                           0x130);
          if ((*(byte *)(lVar4 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)System_Runtime_InteropServices_PreserveSigAttribute_TypeInfo)) {
            bVar2 = *(byte *)(*(long *)UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo +
                             0x130);
            if ((bVar2 <= *(byte *)(lVar4 + 0x130)) &&
               (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar2 * 8 + -8) ==
                *(long *)UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo)) {
              uVar8 = thunk_FUN_01c496e0(*(undefined8 *)OVRGLTFAccessor_TypeInfo);
              FUN_02b1ee9c(uVar8,0,*(undefined8 *)StringLiteral_12529,0);
              FUN_02305eac(param_1,uVar8,0,*(undefined8 *)OVREyeGaze_TypeInfo);
            }
          }
          else {
            uVar8 = thunk_FUN_01c496e0(*(undefined8 *)StringLiteral_10165);
            FUN_0285da04(uVar8,0,*(undefined8 *)StringLiteral_12530,0);
            FUN_03edb598(param_1,uVar8);
          }
          lVar4 = *(long *)puVar3;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar4 = *(long *)puVar3;
          }
          if (**(long **)(lVar4 + 0xb8) != 0) {
            FUN_0290c824(**(long **)(lVar4 + 0xb8),param_1,plVar6,*(undefined8 *)StringLiteral_12528
                        );
            return plVar6;
          }
        }
      }
    }
    else {
      lVar4 = *(long *)puVar3;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar4 = *(long *)puVar3;
      }
      if (**(long **)(lVar4 + 0xb8) != 0) {
        plVar6 = (long *)FUN_0290c7b8(**(long **)(lVar4 + 0xb8),param_1,
                                      *(undefined8 *)StringLiteral_12527);
        return plVar6;
      }
    }
  }
LAB_03edb514:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


