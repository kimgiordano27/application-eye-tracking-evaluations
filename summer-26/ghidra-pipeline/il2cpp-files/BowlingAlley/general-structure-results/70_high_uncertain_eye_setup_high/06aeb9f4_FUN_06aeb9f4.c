/*
FUNCTION_NAME: FUN_06aeb9f4
ENTRY_POINT: 06aeb9f4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06aeb9f4(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_48;
  
  if ((DAT_076e334a & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>_GetResult__
                      );
    thunk_FUN_032e1da0(Method_System_ValueTuple<OVRPlugin_Result,_string>__ctor__);
    thunk_FUN_032e1da0(Method_System_ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>__ctor__);
    thunk_FUN_032e1da0(
                      Method_System_ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>__ctor__
                      );
    thunk_FUN_032e1da0(Method_System_ValueTuple<byte[],_int,_int>__ctor__);
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(PTR_DAT_0728d748);
    thunk_FUN_032e1da0(PTR_DAT_0727b9e8);
    thunk_FUN_032e1da0(Method_System_ValueTuple<string[],_string[],_string>__ctor__);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(
                      Method_System_ValueTuple<FilterMode,_TextureWrapMode,_TextureWrapMode>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_System_ValueTuple<FilterMode,_TextureWrapMode,_TextureWrapMode>_GetHashCode__
                      );
    DAT_076e334a = 1;
  }
  local_48 = 0;
  local_60 = 0;
  local_58 = 0;
  local_68 = 0;
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    if ((*(char *)(lVar4 + 0x20) == '\0') && ((param_2 & 1) == 0)) {
      return;
    }
    *(undefined1 *)(lVar4 + 0x20) = 0;
    lVar4 = FUN_06be6b04(lVar4,0);
    if (lVar4 == 0) goto LAB_06aebeec;
    lVar5 = FUN_06bf4764(lVar4,0);
    puVar1 = PTR_DAT_072794f0;
    if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)PTR_DAT_072794f0);
    }
    uVar6 = FUN_06be9890(lVar5,0,0);
    lVar12 = 0;
    if ((uVar6 & 1) != 0) {
      if (lVar5 == 0) goto LAB_06aebeec;
      lVar12 = FUN_03959198(lVar5,*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>_GetResult__
                           );
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    bVar3 = FUN_06be9890(lVar12,0,0);
    *(byte *)(param_1 + 0x31) = bVar3 & 1;
    if ((bVar3 & 1) != 0) {
      if (*(char *)(param_1 + 0x30) != '\x01' || (param_2 & 1) != 0) {
        uVar6 = FUN_039599a0(lVar4,&local_48,
                             *(undefined8 *)
                              Method_System_ValueTuple<OVRPlugin_Result,_string>__ctor__);
        lVar9 = *(long *)(param_1 + 0x20);
        if (lVar9 == 0) goto LAB_06aebeec;
        if ((uVar6 & 1) == 0) {
          *(undefined1 *)(lVar9 + 0x10) = 0;
        }
        else {
          *(undefined1 *)(lVar9 + 0x10) = 1;
          FUN_06aec29c(lVar9,local_48);
          uVar7 = local_48;
                    /* try { // try from 06aebbc4 to 06bebcdf has its CatchHandler @ 06aebbc4
                       catch() { ... } // from try @ 06aebbc4 with catch @ 06aebbc4
                       catch() { ... } // from try @ 06aebd60 with catch @ 06aebbc4
                       catch() { ... } // from try @ 06aebe94 with catch @ 06aebbc4
                       catch() { ... } // from try @ 06aebec8 with catch @ 06aebbc4
                       catch() { ... } // from try @ 06aebf04 with catch @ 06aebbc4
                       catch() { ... } // from try @ 06aebf50 with catch @ 06aebbc4
                       catch() { ... } // from try @ 06aebf78 with catch @ 06aebbc4
                       catch() { ... } // from try @ 06aebfec with catch @ 06aebbc4
                       catch() { ... } // from try @ 06aec044 with catch @ 06aebbc4 */
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          FUN_06bed9d0(uVar7,0);
        }
        uVar6 = FUN_039599a0(lVar4,&local_58,
                             *(undefined8 *)
                              Method_System_ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>__ctor__
                            );
        lVar9 = local_58;
        lVar10 = *(long *)(param_1 + 0x28);
        if (lVar10 == 0) goto LAB_06aebeec;
        if ((uVar6 & 1) == 0) {
          *(undefined1 *)(lVar10 + 0x10) = 0;
        }
        else {
          *(undefined1 *)(lVar10 + 0x10) = 1;
          if (local_58 == 0) goto LAB_06aebeec;
          *(undefined4 *)(lVar10 + 0x14) = *(undefined4 *)(local_58 + 0x30);
          *(undefined4 *)(lVar10 + 0x18) = *(undefined4 *)(local_58 + 0x2c);
          *(undefined1 *)(lVar10 + 0x1c) = *(undefined1 *)(local_58 + 0x28);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          FUN_06bed9d0(lVar9,0);
        }
        uVar6 = FUN_039599a0(lVar4,&local_60,
                             *(undefined8 *)
                              Method_System_ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>__ctor__
                            );
        lVar9 = *(long *)(param_1 + 0x18);
        if (lVar9 == 0) goto LAB_06aebeec;
        if ((uVar6 & 1) == 0) {
          *(undefined1 *)(lVar9 + 0x10) = 0;
        }
        else {
          *(undefined1 *)(lVar9 + 0x10) = 1;
          FUN_06aec324(lVar9,local_60);
          uVar7 = local_60;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          FUN_06bed9d0(uVar7,0);
        }
        puVar2 = Method_System_ValueTuple<byte[],_int,_int>__ctor__;
        uVar6 = FUN_039599a0(lVar4,(long *)(param_1 + 0x48),
                             *(undefined8 *)Method_System_ValueTuple<byte[],_int,_int>__ctor__);
        if ((uVar6 & 1) != 0) {
          if (lVar12 == 0) goto LAB_06aebeec;
          uVar6 = FUN_039599a0(lVar12,&local_68,*(undefined8 *)puVar2);
          if ((uVar6 & 1) == 0) {
            if (lVar5 == 0) goto LAB_06aebeec;
            uVar7 = FUN_06becffc(lVar5,0);
            uVar8 = FUN_06becffc(lVar4,0);
            uVar7 = FUN_057ab20c(*(undefined8 *)
                                  Method_System_ValueTuple<FilterMode,_TextureWrapMode,_TextureWrapMode>__ctor__
                                 ,uVar7,*(undefined8 *)
                                         Method_System_ValueTuple<FilterMode,_TextureWrapMode,_TextureWrapMode>_GetHashCode__
                                 ,uVar8,0);
            if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
              thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
            }
            FUN_06bb3070(uVar7,lVar4,0);
          }
          lVar5 = *(long *)(param_1 + 0x48);
          if (lVar5 == 0) goto LAB_06aebeec;
          FUN_06be6010(lVar5,0,0);
        }
      }
      if (*(char *)(param_1 + 0x31) != '\0') goto LAB_06aebec8;
    }
    if ((param_2 & 1) == 0 && *(char *)(param_1 + 0x30) == '\0') {
LAB_06aebec8:
      *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_1 + 0x31);
      return;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      if (*(char *)(*(long *)(param_1 + 0x18) + 0x10) == '\0') goto LAB_06aebec8;
      lVar4 = FUN_06be6b40(lVar4,0);
      if (lVar4 != 0) {
        uVar7 = FUN_039efc38(lVar4,*(undefined8 *)PTR_DAT_0727b9e8);
        *(undefined8 *)(param_1 + 0x38) = uVar7;
        thunk_FUN_0333a630((undefined8 *)(param_1 + 0x38),uVar7);
        if (*(long *)(param_1 + 0x18) != 0) {
          FUN_06aec41c(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x38));
          if (*(long *)(param_1 + 0x20) != 0) {
            if (*(char *)(*(long *)(param_1 + 0x20) + 0x10) != '\0') {
              uVar7 = FUN_039efc38(lVar4,*(undefined8 *)PTR_DAT_0728d748);
              if (*(long *)(param_1 + 0x20) == 0) goto LAB_06aebeec;
              FUN_06aec4fc(*(long *)(param_1 + 0x20),uVar7);
            }
            if (*(long *)(param_1 + 0x28) != 0) {
              if (*(char *)(*(long *)(param_1 + 0x28) + 0x10) != '\0') {
                lVar4 = FUN_039efc38(lVar4,*(undefined8 *)
                                            Method_System_ValueTuple<string[],_string[],_string>__ctor__
                                    );
                plVar11 = (long *)(param_1 + 0x40);
                *plVar11 = lVar4;
                thunk_FUN_0333a630(plVar11,lVar4);
                lVar4 = *(long *)(param_1 + 0x28);
                if ((lVar4 == 0) || (lVar5 = *plVar11, lVar5 == 0)) goto LAB_06aebeec;
                *(undefined4 *)(lVar5 + 0x30) = *(undefined4 *)(lVar4 + 0x14);
                *(undefined4 *)(lVar5 + 0x2c) = *(undefined4 *)(lVar4 + 0x18);
                *(undefined1 *)(lVar5 + 0x28) = *(undefined1 *)(lVar4 + 0x1c);
              }
              uVar7 = *(undefined8 *)(param_1 + 0x48);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              uVar6 = FUN_06be9890(uVar7,0,0);
              if ((uVar6 & 1) != 0) {
                if (*(long *)(param_1 + 0x48) == 0) goto LAB_06aebeec;
                FUN_06be6010(*(long *)(param_1 + 0x48),1,0);
              }
              goto LAB_06aebec8;
            }
          }
        }
      }
    }
  }
LAB_06aebeec:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


