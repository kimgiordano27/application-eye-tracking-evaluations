/*
FUNCTION_NAME: FUN_03b6fd88
ENTRY_POINT: 03b6fd88
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_03b6fd88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  puVar1 = StringLiteral_12747;
  if ((DAT_04839630 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Globalization_CompareInfo_GetHashCodeOfString__);
    thunk_FUN_01efb3a4(StringLiteral_12747);
    thunk_FUN_01efb3a4(StringLiteral_12752);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__
                      );
    DAT_04839630 = 1;
  }
  lVar3 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  thunk_FUN_03b4200c(lVar3,0);
  local_38 = FUN_03b60464(lVar3,0);
  local_38 = FUN_03b6b1e4(&local_38,param_1,0xc,0);
  puVar1 = StringLiteral_12752;
  if (local_38 != 0) {
    *(undefined8 *)(local_38 + 0x80) = param_4;
    thunk_FUN_01f51358((undefined8 *)(local_38 + 0x80),param_4);
    lVar2 = local_38;
    local_50 = 0;
    uStack_48 = 0;
    FUN_03b412f4(&local_50,*(undefined8 *)puVar1,0);
    puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__;
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x28) = uStack_48;
      *(undefined8 *)(lVar2 + 0x20) = local_50;
      thunk_FUN_01f51358(lVar2 + 0x20,0);
      lVar2 = local_38;
      local_50 = 0;
      uStack_48 = 0;
      FUN_03b412f4(&local_50,*(undefined8 *)puVar1,0);
      uVar4 = FUN_03b41740(local_50,uStack_48,0);
      if (lVar2 != 0) {
        puVar5 = (undefined8 *)(lVar2 + 0x40);
        *puVar5 = uVar4;
        thunk_FUN_01f51358(puVar5,uVar4);
        if (local_38 != 0) {
          *(undefined8 *)(local_38 + 0x58) = param_2;
          *(undefined8 *)(local_38 + 0x60) = param_3;
          thunk_FUN_01f51358((undefined8 *)(local_38 + 0x58),0);
          puVar1 = Method_System_Globalization_CompareInfo_GetHashCodeOfString__;
          if (local_38 != 0) {
            FUN_03b5e190(local_38,1,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar4 = _DAT_00c8f680;
            if (local_38 != 0) {
              *(undefined8 *)(local_38 + 0x18) = _UNK_00c8f688;
              *(undefined8 *)(local_38 + 0x10) = uVar4;
              auVar6 = FUN_03b50284(0,0);
              auVar7 = FUN_03b50284(1,0);
              if (local_38 != 0) {
                *(undefined1 (*) [16])(local_38 + 200) = auVar7;
                *(undefined1 (*) [16])(local_38 + 0xb8) = auVar6;
                FUN_03b5e164(local_38,1,0);
                if (lVar3 != 0) {
                  *(undefined4 *)(lVar3 + 0x130) = 0xb;
                  return lVar3;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


