/*
FUNCTION_NAME: FUN_05c32be4
ENTRY_POINT: 05c32be4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_05c32be4(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint extraout_var;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined1 local_50 [16];
  
  if ((DAT_06dc27d1 & 1) == 0) {
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>_Add__);
    FUN_02d965b8(PTR_DAT_069fe788);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>_Clear__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>_ContainsKey__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>_get_Item__);
    FUN_02d965b8(OVRPlugin_OVRP_1_36_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_37_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_38_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a05290);
    FUN_02d965b8(OVRPlugin_OVRP_1_39_0_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<uint,_Type>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<uint,_Type>_ContainsKey__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<uint,_Type>_get_Item__);
    DAT_06dc27d1 = 1;
  }
  puVar1 = PTR_DAT_069fe788;
  lVar11 = *(long *)(param_1 + 8);
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(lVar11 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_05c2ac04(*(long *)(lVar11 + 0x50),*(undefined8 *)(param_1 + 10));
    if (*(char *)(lVar11 + 0x80) != '\0') goto LAB_05c32fc0;
    plVar5 = *(long **)(lVar11 + 0x40);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar6 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
    uVar7 = thunk_FUN_0536b75c(uVar6,*(undefined8 *)OVRPlugin_OVRP_1_36_0_TypeInfo,0);
    if ((((uVar7 & 1) == 0) &&
        (uVar7 = thunk_FUN_0536b75c(uVar6,*(undefined8 *)OVRPlugin_OVRP_1_37_0_TypeInfo,0),
        (uVar7 & 1) == 0)) &&
       (uVar7 = thunk_FUN_0536b75c(uVar6,*(undefined8 *)PTR_DAT_06a05290,0), (uVar7 & 1) == 0)) {
      uVar3 = thunk_FUN_0536b75c(uVar6,*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,0);
    }
    else {
      uVar3 = 1;
    }
    uVar7 = thunk_FUN_0536b75c(uVar6,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<uint,_Type>_get_Item__
                               ,0);
    if (((((uVar7 & 1) == 0) &&
         (uVar7 = thunk_FUN_0536b75c(uVar6,*(undefined8 *)
                                            Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>_Clear__
                                     ,0), (uVar7 & 1) == 0)) &&
        ((uVar7 = thunk_FUN_0536b75c(uVar6,*(undefined8 *)OVRPlugin_OVRP_1_39_0_TypeInfo,0),
         (uVar7 & 1) == 0 &&
         ((uVar7 = thunk_FUN_0536b75c(uVar6,*(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary<uint,_Type>_ContainsKey__
                                      ,0), (uVar7 & 1) == 0 &&
          (uVar7 = thunk_FUN_0536b75c(uVar6,*(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>_get_Item__
                                      ,0), (uVar7 & 1) == 0)))))) &&
       (uVar7 = thunk_FUN_0536b75c(uVar6,*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<uint,_Type>__ctor__
                                   ,0), (uVar7 & 1) == 0)) {
      uVar4 = thunk_FUN_0536b75c(uVar6,*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>_ContainsKey__
                                 ,0);
    }
    else {
      uVar4 = 1;
    }
    lVar9 = *(long *)(lVar11 + 0x50);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar10 = (uint)(*(char *)(lVar9 + 0x30) != '\0');
    if ((char)param_1[0xc] == '\0') {
      if (uVar10 == 0 && (uVar3 & 1) == 0) goto LAB_05c32eb4;
LAB_05c32eac:
      uVar8 = 0;
    }
    else {
      if (uVar10 != 0 || (uVar3 & 1) != 0) goto LAB_05c32eac;
      if ((*(long *)(lVar9 + 0x28) != 0) || (*(long *)(lVar11 + 0x58) != 0)) {
        lVar12 = *(long *)(lVar11 + 0x40);
        iVar2 = FUN_05c3095c(lVar11);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar9 = *(long *)(lVar11 + 0x50);
        *(long *)(lVar12 + 0x68) = (long)iVar2;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
      }
LAB_05c32eb4:
      if ((*(long *)(lVar9 + 0x28) == 0) && (*(long *)(lVar11 + 0x58) == 0)) {
        uVar8 = 1;
      }
      else {
        plVar5 = *(long **)(lVar11 + 0x40);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        (**(code **)(*plVar5 + 0x218))(plVar5,*(undefined8 *)(*plVar5 + 0x220));
        uVar8 = extraout_var >> 0x1f ^ 1;
      }
    }
    if (*(char *)(lVar11 + 0x62) == '\0' && ((uVar4 | uVar8 | uVar10 | uVar3) & 1) == 0)
    goto LAB_05c32fc0;
    *(undefined1 *)(lVar11 + 0x80) = 1;
    if (*(long *)(lVar11 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar6 = FUN_05c1a2f0(*(long *)(lVar11 + 0x40),0);
    *(undefined8 *)(lVar11 + 0x78) = uVar6;
    LeanTween__value();
    lVar9 = *(long *)(lVar11 + 0x78);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar5 = *(long **)(lVar11 + 0x90);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar9 = (**(code **)(*plVar5 + 0x318))
                      (plVar5,lVar9,0,*(undefined4 *)(lVar9 + 0x18),*(undefined8 *)(param_1 + 10),
                       *(undefined8 *)(*plVar5 + 800));
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_50 = FUN_0555c350(lVar9,0,0);
    uVar7 = FUN_05410178(local_50,0);
    if ((uVar7 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xe) = local_50;
      LeanTween__value(param_1 + 0xe,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0353b420(param_1 + 2,local_50,param_1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>_Add__);
      return;
    }
  }
  FUN_05410190(local_50,0);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar5 = *(long **)(lVar11 + 0x40);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar9 = (**(code **)(*plVar5 + 0x218))(plVar5,*(undefined8 *)(*plVar5 + 0x220));
  if ((lVar9 == 0) && (*(char *)(lVar11 + 0x62) == '\0')) {
    *(undefined1 *)(lVar11 + 0x60) = 1;
  }
LAB_05c32fc0:
  lVar11 = *(long *)puVar1;
  *param_1 = -2;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05410914(param_1 + 2,0);
  return;
}


