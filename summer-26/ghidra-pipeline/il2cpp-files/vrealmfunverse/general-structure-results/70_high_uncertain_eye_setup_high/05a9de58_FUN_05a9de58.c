/*
FUNCTION_NAME: FUN_05a9de58
ENTRY_POINT: 05a9de58
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05a9de58(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long *param_5,long param_6)

{
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int extraout_var;
  int extraout_var_00;
  long *plVar12;
  long *plVar13;
  undefined4 uVar14;
  long local_90;
  long lStack_88;
  long local_80;
  long local_70;
  long lStack_68;
  long local_60;
  
  if ((DAT_066d4222 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_System_Collections_Generic_List<NavMeshBuildSource>__ctor__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<NavMeshBuildMarkup>_Add__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<NavMeshBuildMarkup>_ToArray__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>__ctor__);
    FUN_02b3c81c(
                Method_System_Collections_Generic_KeyValuePair<BodyPart,_SimpleRagDolllTarget[]>_get_Key__
                );
    FUN_02b3c81c(Method_System_Security_Cryptography_DerSequenceReader_ReadBoolean__);
    FUN_02b3c81c(Method_System_Security_Cryptography_DerSequenceReader_ReadOidAsString__);
    DAT_066d4222 = 1;
  }
  if (param_6 == 0) {
    return;
  }
  lVar6 = FUN_056f5458(param_5 + 0x16,0);
  lVar7 = FUN_056f5458(param_5 + 0x19,0);
  lVar8 = FUN_056f5458(param_5 + 0x1c,0);
  lVar9 = FUN_056f5458(param_5 + 0x1f,0);
  if (((char)param_5[0x49] == '\0') && (lVar6 != 0 || lVar7 != 0)) {
    lStack_68 = param_5[0x17];
    local_70 = param_5[0x16];
    local_60 = param_5[0x18];
    uVar10 = FUN_05a9e3c4(&local_70);
    if ((uVar10 & 1) == 0) {
      lStack_88 = param_5[0x1a];
      local_90 = param_5[0x19];
      local_80 = param_5[0x1b];
      uVar10 = FUN_05a9e3c4(&local_90);
      if ((uVar10 & 1) != 0) goto LAB_05a9df78;
    }
    else {
LAB_05a9df78:
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05c453b4(*(undefined8 *)
                    Method_System_Security_Cryptography_DerSequenceReader_ReadOidAsString__,param_5,
                   0);
    }
    *(undefined1 *)(param_5 + 0x49) = 1;
  }
  *(undefined1 *)(param_6 + 0x1c) = 0;
  *(undefined4 *)(param_6 + 0x18) = 0;
  if ((lVar8 == 0) || (FUN_056de9f0(lVar8,0), extraout_var < 1)) {
    if ((lVar9 == 0) ||
       ((lVar11 = FUN_056def70(lVar9,0), lVar11 == 0 ||
        (plVar12 = *(long **)(lVar11 + 0x78), plVar12 == (long *)0x0)))) {
LAB_05a9e044:
      if ((lVar6 == 0) || (lVar11 = FUN_056def70(lVar6,0), lVar11 == 0)) {
        plVar12 = (long *)0x0;
      }
      else {
        plVar12 = *(long **)(lVar11 + 0x78);
      }
      puVar1 = Method_System_Security_Cryptography_DerSequenceReader_ReadBoolean__;
      lVar11 = *(long *)Method_System_Security_Cryptography_DerSequenceReader_ReadBoolean__;
      if (lVar7 == 0) {
        if (plVar12 == (long *)0x0) {
LAB_05a9e0c0:
          bVar2 = 0;
          goto LAB_05a9e170;
        }
        if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) !=
            lVar11)) goto LAB_05a9e0c0;
        plVar13 = (long *)0x0;
LAB_05a9e114:
        if (plVar12[0x32] == 0) goto LAB_05a9e3bc;
        bVar2 = FUN_057083b8(plVar12[0x32],0);
      }
      else {
        if (plVar12 != (long *)0x0) {
          if (*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar11 + 0x130)) {
            plVar12 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8)
                   != lVar11) {
            plVar12 = (long *)0x0;
          }
        }
        lVar11 = FUN_056def70(lVar7,0);
        if ((lVar11 == 0) || (plVar13 = *(long **)(lVar11 + 0x78), plVar13 == (long *)0x0)) {
LAB_05a9e10c:
          plVar13 = (long *)0x0;
        }
        else {
          bVar2 = *(byte *)(*(long *)puVar1 + 0x130);
          if (*(byte *)(*plVar13 + 0x130) < bVar2) goto LAB_05a9e10c;
          if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar1) {
            plVar13 = (long *)0x0;
          }
        }
        if (plVar12 != (long *)0x0) goto LAB_05a9e114;
        bVar2 = 0;
      }
      if (plVar12 != plVar13) {
        if (plVar13 == (long *)0x0) {
          bVar3 = 0;
        }
        else {
          if (plVar13[0x32] == 0) goto LAB_05a9e3bc;
          bVar3 = FUN_057083b8(plVar13[0x32],0);
        }
        bVar2 = bVar2 & bVar3;
      }
      goto LAB_05a9e170;
    }
    bVar2 = *(byte *)(*(long *)Method_System_Security_Cryptography_DerSequenceReader_ReadBoolean__ +
                     0x130);
    if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_System_Security_Cryptography_DerSequenceReader_ReadBoolean__))
    goto LAB_05a9e044;
    if (plVar12[0x32] == 0) goto LAB_05a9e3bc;
    bVar2 = FUN_057083b8(plVar12[0x32],0);
    *(byte *)(param_6 + 0x1c) = bVar2 & 1;
LAB_05a9e17c:
    FUN_056de9f0(lVar9,0);
    if (0 < extraout_var_00) {
      uVar4 = FUN_031ee1f8(lVar9,*(undefined8 *)
                                  Method_System_Collections_Generic_List<NavMeshBuildSource>__ctor__
                          );
      goto LAB_05a9e310;
    }
  }
  else {
    bVar2 = (**(code **)(*param_5 + 0x268))(param_5,lVar8,*(undefined8 *)(*param_5 + 0x270));
LAB_05a9e170:
    *(byte *)(param_6 + 0x1c) = bVar2 & 1;
    if (lVar9 != 0) goto LAB_05a9e17c;
  }
  if (((lVar8 != 0) && (lVar8 = FUN_056def70(lVar8,0), lVar8 != 0)) &&
     (plVar12 = *(long **)(lVar8 + 0x78), plVar12 != (long *)0x0)) {
    bVar2 = *(byte *)(*(long *)Method_System_Security_Cryptography_DerSequenceReader_ReadBoolean__ +
                     0x130);
    if ((bVar2 <= *(byte *)(*plVar12 + 0x130)) &&
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)Method_System_Security_Cryptography_DerSequenceReader_ReadBoolean__)) {
      if (plVar12[0x31] == 0) goto LAB_05a9e3bc;
      uVar4 = FUN_04ad3a94(plVar12[0x31],
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>__ctor__);
      goto LAB_05a9e310;
    }
  }
  if (((lVar6 == 0) || (lVar8 = FUN_056def70(lVar6,0), lVar8 == 0)) ||
     (plVar12 = *(long **)(lVar8 + 0x78), plVar12 == (long *)0x0)) {
UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages___cctor:
    plVar12 = (long *)0x0;
    if (lVar7 == 0) goto LAB_05a9e2b4;
LAB_05a9e244:
    lVar8 = FUN_056def70(lVar7,0);
    if ((lVar8 == 0) || (plVar13 = *(long **)(lVar8 + 0x78), plVar13 == (long *)0x0))
    goto LAB_05a9e2b4;
    bVar2 = *(byte *)(*(long *)Method_System_Security_Cryptography_DerSequenceReader_ReadBoolean__ +
                     0x130);
    if (*(byte *)(*plVar13 + 0x130) < bVar2) goto LAB_05a9e2b4;
    if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_System_Security_Cryptography_DerSequenceReader_ReadBoolean__) {
      plVar13 = (long *)0x0;
    }
    if (plVar12 == (long *)0x0) goto LAB_05a9e294;
LAB_05a9e2bc:
    if (plVar12[0x31] == 0) goto LAB_05a9e3bc;
    uVar4 = FUN_04ad3a94(plVar12[0x31],
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>__ctor__);
  }
  else {
    bVar2 = *(byte *)(*(long *)Method_System_Security_Cryptography_DerSequenceReader_ReadBoolean__ +
                     0x130);
    if (*(byte *)(*plVar12 + 0x130) < bVar2)
    goto UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages___cctor;
    if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_System_Security_Cryptography_DerSequenceReader_ReadBoolean__) {
      plVar12 = (long *)0x0;
    }
    if (lVar7 != 0) goto LAB_05a9e244;
LAB_05a9e2b4:
    plVar13 = (long *)0x0;
    if (plVar12 != (long *)0x0) goto LAB_05a9e2bc;
LAB_05a9e294:
    uVar4 = 0;
  }
  if (plVar12 != plVar13) {
    if (plVar13 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      if (plVar13[0x31] == 0) {
LAB_05a9e3bc:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar5 = FUN_04ad3a94(plVar13[0x31],
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>__ctor__);
      uVar5 = uVar5 & 2;
    }
    uVar4 = uVar5 | uVar4 & 1;
  }
LAB_05a9e310:
  *(uint *)(param_6 + 0x18) = uVar4;
  if ((lVar6 != 0) && ((uVar4 & 1) != 0)) {
    uVar14 = FUN_031ee568(lVar6,*(undefined8 *)
                                 Method_System_Collections_Generic_List<NavMeshBuildMarkup>_ToArray__
                         );
    *(undefined4 *)(param_6 + 0x20) = uVar14;
    *(undefined4 *)(param_6 + 0x24) = param_2;
    *(undefined4 *)(param_6 + 0x28) = param_3;
  }
  if ((lVar7 != 0) && ((*(byte *)(param_6 + 0x18) >> 1 & 1) != 0)) {
    uVar14 = FUN_031ee2d4(lVar7,*(undefined8 *)
                                 Method_System_Collections_Generic_List<NavMeshBuildMarkup>_Add__);
    *(undefined4 *)(param_6 + 0x2c) = uVar14;
    *(undefined4 *)(param_6 + 0x30) = param_2;
    *(undefined4 *)(param_6 + 0x34) = param_3;
    *(undefined4 *)(param_6 + 0x38) = param_4;
  }
  return;
}


