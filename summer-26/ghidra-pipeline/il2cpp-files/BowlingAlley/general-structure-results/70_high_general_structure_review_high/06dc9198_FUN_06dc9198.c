/*
FUNCTION_NAME: FUN_06dc9198
ENTRY_POINT: 06dc9198
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4
*/


uint FUN_06dc9198(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 local_30 [16];
  undefined8 local_18;
  
  if ((DAT_076e9fdd & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_Flow_GetValue<float>__);
    thunk_FUN_032e1da0(Method_System_IO_Compression_GZipStream_get_Length__);
    thunk_FUN_032e1da0(Method_Newtonsoft_Json_JsonSerializer_Deserialize<RegexOptions>__);
    DAT_076e9fdd = 1;
  }
  local_18 = 0;
  local_30._0_8_ = 0;
  local_30._8_8_ = 0;
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0x28) != '\0') {
      uVar2 = 1;
LAB_06dc92f0:
      return uVar2 & 1;
    }
    uVar5 = *(undefined8 *)(lVar4 + 0x10);
    if (*(int *)(*(long *)Method_Unity_VisualScripting_Flow_GetValue<float>__ + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar3 = FUN_06d061bc(uVar5,&local_18,0);
    puVar1 = Method_System_IO_Compression_GZipStream_get_Length__;
    if ((uVar3 & 1) == 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar5 = FUN_057a19ac(*(undefined8 *)
                              Method_Newtonsoft_Json_JsonSerializer_Deserialize<RegexOptions>__,
                             *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10),0);
        if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
        }
        FUN_06bb3608(uVar5,0);
        uVar2 = 0;
        goto LAB_06dc92f0;
      }
    }
    else {
      lVar4 = *(long *)Method_System_IO_Compression_GZipStream_get_Length__;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar4 = *(long *)puVar1;
      }
      if (**(long **)(lVar4 + 0xb8) != 0) {
        uVar5 = FUN_06d127a0(**(long **)(lVar4 + 0xb8),local_18,0);
        if (*(long *)(param_1 + 0x10) != 0) {
          local_30 = FUN_06d11e58(*(long *)(param_1 + 0x10),uVar5,*(undefined8 *)(param_1 + 0x18),0)
          ;
          uVar2 = UnityEngine_UIElements_PanelEventHandler_PointerEvent__set_localPosition
                            (local_30,0);
          goto LAB_06dc92f0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


