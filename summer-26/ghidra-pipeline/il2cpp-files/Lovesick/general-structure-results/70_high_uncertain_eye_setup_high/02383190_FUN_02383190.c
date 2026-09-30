/*
FUNCTION_NAME: FUN_02383190
ENTRY_POINT: 02383190
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02383190(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  
  if ((DAT_03781dfe & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Text_RegularExpressions_Match__ctor__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_87__);
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_DebugDisplaySettings_TypeInfo);
    DAT_03781dfe = 1;
  }
  if (*(char *)(param_1 + 0x129) != '\0') {
    return;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x138);
  uVar1 = *(undefined4 *)(param_1 + 0x140);
  uVar9 = *(undefined8 *)(param_1 + 300);
  uVar2 = *(undefined4 *)(param_1 + 0x134);
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_87__);
  puVar4 = Method_System_Text_RegularExpressions_Match__ctor__;
  if (lVar5 != 0) {
    FUN_023812dc(lVar5,param_2,param_3,param_4);
    *(long *)(param_1 + 0x80) = lVar5;
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    puVar4 = UnityEngine_Rendering_Universal_DebugDisplaySettings_TypeInfo;
    if (lVar5 != 0) {
      FUN_0237f2f0(lVar5,param_3);
      *(long *)(param_1 + 0x88) = lVar5;
      iVar3 = *(int *)(param_1 + 0x78);
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      if (lVar5 != 0) {
        fVar10 = powf(3.0,(float)(iVar3 + -1));
        iVar3 = -0x80000000;
        if (fVar10 != INFINITY) {
          iVar3 = (int)fVar10;
        }
        FUN_023828e4(lVar5,uVar9,uVar2,uVar8,uVar1,iVar3);
        lVar6 = *(long *)(param_1 + 0xa0);
        *(long *)(param_1 + 0x90) = lVar5;
        if (lVar6 != 0) {
          uVar7 = *(ulong *)(lVar6 + 0x18);
          if ((int)uVar7 != 0) {
            *(undefined4 *)(lVar6 + 0x20) = 0;
            if (((uVar7 & 0xffffffff) != 1) &&
               (*(undefined4 *)(lVar6 + 0x24) = 0x3eaaaaab, (uVar7 & 0xffffffff) != 2)) {
              *(undefined4 *)(lVar6 + 0x28) = 0x3f2aaaab;
              *(undefined4 *)(lVar6 + ((long)((uVar7 << 0x20) + -0x100000000) >> 0x1e) + 0x20) =
                   0x3f800000;
              *(undefined1 *)(param_1 + 0x129) = 1;
              FUN_023846cc(param_1);
              *(undefined1 *)(param_1 + 0x128) = 1;
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


