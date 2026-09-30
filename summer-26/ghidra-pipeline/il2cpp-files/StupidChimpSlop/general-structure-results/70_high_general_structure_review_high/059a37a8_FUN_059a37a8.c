/*
FUNCTION_NAME: FUN_059a37a8
ENTRY_POINT: 059a37a8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_059a37a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  puVar1 = PTR_DAT_0664adf0;
  if ((DAT_06a5662c & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_0664adf0);
    FUN_02d4dc40(PTR_DAT_0664ae80);
    FUN_02d4dc40(Method_UnityEngine_Events_UnityEvent<string,_string,_int>_Invoke__);
    FUN_02d4dc40(Method_System_ValueTuple<Vector4,_Vector4>__ctor__);
    DAT_06a5662c = 1;
  }
  local_38 = 0;
  uVar3 = thunk_FUN_02d8a638(*(undefined8 *)puVar1);
  FUN_05939bf8(uVar3,0);
  local_38 = FUN_0595aa44(uVar3,0);
  local_38 = FUN_05961db0(&local_38,param_1,8,0);
  puVar1 = Method_System_ValueTuple<Vector4,_Vector4>__ctor__;
  if (local_38 != 0) {
    *(undefined8 *)(local_38 + 0x80) = param_4;
    thunk_FUN_02dc1ef0((undefined8 *)(local_38 + 0x80),param_4);
    lVar2 = local_38;
    local_50 = 0;
    uStack_48 = 0;
    FUN_05938f8c(&local_50,*(undefined8 *)puVar1,0);
    puVar1 = Method_UnityEngine_Events_UnityEvent<string,_string,_int>_Invoke__;
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x28) = uStack_48;
      *(undefined8 *)(lVar2 + 0x20) = local_50;
      thunk_FUN_02dc1ef0(lVar2 + 0x20,0);
      lVar2 = local_38;
      local_50 = 0;
      uStack_48 = 0;
      FUN_05938f8c(&local_50,*(undefined8 *)puVar1,0);
      uVar4 = FUN_05939374(local_50,uStack_48,0);
      if (lVar2 != 0) {
        puVar5 = (undefined8 *)(lVar2 + 0x40);
        *puVar5 = uVar4;
        thunk_FUN_02dc1ef0(puVar5,uVar4);
        if (local_38 != 0) {
          *(undefined8 *)(local_38 + 0x58) = param_2;
          *(undefined8 *)(local_38 + 0x60) = param_3;
          thunk_FUN_02dc1ef0((undefined8 *)(local_38 + 0x58),0);
          puVar1 = PTR_DAT_0664ae80;
          if (local_38 != 0) {
            *(undefined8 *)(local_38 + 0x88) = DAT_01274850;
            FUN_0595871c(local_38,1,0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar4 = _DAT_012ba4f0;
            if (local_38 != 0) {
              *(undefined8 *)(local_38 + 0x18) = _UNK_012ba4f8;
              *(undefined8 *)(local_38 + 0x10) = uVar4;
              auVar6 = Unity_Mathematics_bool3__get_xyzy(0,0);
              auVar7 = Unity_Mathematics_bool3__get_xyzy(1,0);
              if (local_38 != 0) {
                *(undefined1 (*) [16])(local_38 + 200) = auVar7;
                *(undefined1 (*) [16])(local_38 + 0xb8) = auVar6;
                FUN_059586f0(local_38,1,0);
                return uVar3;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


