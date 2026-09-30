/*
FUNCTION_NAME: Unity.Services.Vivox.LoginSession.<>c__DisplayClass41_0$$.ctor
ENTRY_POINT: 060125e0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_LoginSession_<>c__DisplayClass41_0___ctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *puVar10;
  
  puVar4 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters__
  ;
  puVar3 = PTR_DAT_06a0aa10;
  puVar2 = PTR_DAT_06a0aa08;
  puVar10 = *(undefined8 **)(unaff_x22 + 0x18);
  FUN_04e935f0();
  FUN_054f73b4(*puVar10,0);
  FUN_04e935f0();
  FUN_054f73b4(*unaff_x21,0);
  FUN_04e935f0();
  FUN_054f73b4(*puVar10,0);
  FUN_04e935f0();
  **(undefined8 **)(*(long *)puVar4 + 0xb8) = unaff_x19;
  LeanTween__value(*(undefined8 *)(*(long *)puVar4 + 0xb8));
  lVar5 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
  FUN_0400f984(lVar5,*(undefined8 *)puVar2);
  uVar6 = FUN_054f73b4(*unaff_x21,0);
  puVar2 = PTR_DAT_06a0aa00;
  if (lVar5 != 0) {
    lVar8 = *(long *)(lVar5 + 0x10);
    lVar9 = *(long *)PTR_DAT_06a0aa00;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
        LeanTween__value();
      }
      else {
        FUN_040101ec(lVar5,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      uVar6 = FUN_054f73b4(*puVar10,0);
      lVar8 = *(long *)(lVar5 + 0x10);
      lVar9 = *(long *)puVar2;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          LeanTween__value();
        }
        else {
          FUN_040101ec(lVar5,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
        }
        plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
        *plVar7 = lVar5;
        LeanTween__value(plVar7,lVar5);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


