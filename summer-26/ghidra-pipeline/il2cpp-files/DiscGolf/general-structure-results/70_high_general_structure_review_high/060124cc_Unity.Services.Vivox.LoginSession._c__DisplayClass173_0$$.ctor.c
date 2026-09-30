/*
FUNCTION_NAME: Unity.Services.Vivox.LoginSession.<>c__DisplayClass173_0$$.ctor
ENTRY_POINT: 060124cc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_LoginSession_<>c__DisplayClass173_0___ctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long unaff_x19;
  undefined8 *puVar14;
  long unaff_x20;
  undefined8 uVar15;
  long unaff_x21;
  undefined8 *puVar16;
  long unaff_x22;
  undefined8 *puVar17;
  
  puVar17 = *(undefined8 **)(unaff_x22 + 0xa50);
  puVar14 = *(undefined8 **)(unaff_x19 + 0xa48);
  puVar16 = *(undefined8 **)(unaff_x21 + 0x10);
  if ((*(byte *)(unaff_x20 + 0xa77) & 1) == 0) {
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastSafeDivide__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters__
                );
    FUN_02d965b8(PTR_DAT_069ff9d8);
    FUN_02d965b8(PTR_DAT_069ffa48);
    FUN_02d965b8(PTR_DAT_069ffa50);
    FUN_02d965b8(PTR_DAT_06a0aa00);
    FUN_02d965b8(PTR_DAT_06a0aa08);
    FUN_02d965b8(PTR_DAT_06a0aa10);
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastSafeDivide__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals__
                );
    FUN_02d965b8(Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale__);
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastOffset__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals__
                );
    *(undefined1 *)(unaff_x20 + 0xa77) = 1;
  }
  lVar10 = thunk_FUN_02dd3144(*puVar17);
  FUN_04e92874(lVar10,*puVar14);
  uVar15 = *puVar16;
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar15 = FUN_054f73b4(uVar15,0);
  puVar9 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters__
  ;
  puVar8 = Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastOffset__
  ;
  puVar7 = Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale__;
  puVar6 = Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals__;
  puVar5 = Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastSafeDivide__;
  puVar4 = PTR_DAT_06a0aa10;
  puVar3 = PTR_DAT_06a0aa08;
  puVar2 = PTR_DAT_069ff9d8;
  if (lVar10 != 0) {
    FUN_04e935f0(lVar10,*(undefined8 *)
                         Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals__
                 ,uVar15,*(undefined8 *)PTR_DAT_069ff9d8);
    uVar15 = FUN_054f73b4(*(undefined8 *)puVar5,0);
    FUN_04e935f0(lVar10,*(undefined8 *)puVar6,uVar15,*(undefined8 *)puVar2);
    uVar15 = FUN_054f73b4(*puVar16,0);
    FUN_04e935f0(lVar10,*(undefined8 *)puVar8,uVar15,*(undefined8 *)puVar2);
    uVar15 = FUN_054f73b4(*(undefined8 *)puVar5,0);
    FUN_04e935f0(lVar10,*(undefined8 *)puVar7,uVar15,*(undefined8 *)puVar2);
    **(long **)(*(long *)puVar9 + 0xb8) = lVar10;
    LeanTween__value(*(undefined8 *)(*(long *)puVar9 + 0xb8),lVar10);
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
    FUN_0400f984(lVar10,*(undefined8 *)puVar3);
    uVar15 = FUN_054f73b4(*puVar16,0);
    puVar2 = PTR_DAT_06a0aa00;
    if (lVar10 != 0) {
      lVar12 = *(long *)(lVar10 + 0x10);
      lVar13 = *(long *)PTR_DAT_06a0aa00;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar15;
          LeanTween__value();
        }
        else {
          FUN_040101ec(lVar10,uVar15,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        uVar15 = FUN_054f73b4(*(undefined8 *)puVar5,0);
        lVar12 = *(long *)(lVar10 + 0x10);
        lVar13 = *(long *)puVar2;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar12 != 0) {
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar15;
            LeanTween__value();
          }
          else {
            FUN_040101ec(lVar10,uVar15,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          plVar11 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 8);
          *plVar11 = lVar10;
          LeanTween__value(plVar11,lVar10);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


