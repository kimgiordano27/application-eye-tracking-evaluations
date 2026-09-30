/*
FUNCTION_NAME: FUN_05c182d8
ENTRY_POINT: 05c182d8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x05c18550) */
/* WARNING: Removing unreachable block (ram,0x05c184c8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_05c182d8(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  char local_2c [4];
  undefined8 local_28;
  
  if ((DAT_06dc26fd & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_36_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_37_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_38_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a05290);
    FUN_02d965b8(PTR_DAT_069fba08);
    DAT_06dc26fd = 1;
  }
  local_28 = 0;
  local_2c[0] = '\0';
  iVar1 = thunk_FUN_02dcf944(param_1 + 0x118,0,0,0);
  if (iVar1 == 1) {
    thunk_FUN_02dfd288(PTR_DAT_06a0dbb0);
    FUN_0297e1b4();
    uVar4 = FUN_05c18674();
  }
  else {
    uVar2 = thunk_FUN_0536b75c(*(undefined8 *)(param_1 + 0xa8),
                               *(undefined8 *)OVRPlugin_OVRP_1_36_0_TypeInfo,0);
    if (((((uVar2 & 1) == 0) &&
         (uVar2 = thunk_FUN_0536b75c(*(undefined8 *)(param_1 + 0xa8),
                                     *(undefined8 *)OVRPlugin_OVRP_1_37_0_TypeInfo,0),
         (uVar2 & 1) == 0)) &&
        (uVar2 = thunk_FUN_0536b75c(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)PTR_DAT_06a05290,
                                    0), (uVar2 & 1) == 0)) &&
       ((uVar2 = thunk_FUN_0536b75c(*(undefined8 *)(param_1 + 0xa8),
                                    *(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,0),
        *(long *)(param_1 + 0xa8) != 0 && ((uVar2 & 1) == 0)))) {
      if (((*(long *)(param_1 + 0x68) != -1) || (*(char *)(param_1 + 0xe0) != '\0')) ||
         ((*(char *)(param_1 + 0x4a) != '\0' || (*(char *)(param_1 + 0x98) == '\0')))) {
        lVar3 = FUN_05c17718(param_1);
        if ((*(char *)(param_1 + 0xe0) == '\0') && (lVar3 != 0)) {
          uVar4 = FUN_05371f5c(lVar3,0);
          uVar2 = FUN_0536ba54(uVar4,*(undefined8 *)PTR_DAT_069fba08,0);
          if ((uVar2 & 1) != 0) {
            thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
            uVar4 = thunk_FUN_02dd3144();
            uVar6 = thunk_FUN_02dfd288(
                                      Method_System_Collections_Generic_Dictionary<string,_VisualElement>_Add__
                                      );
            FUN_054e8008(uVar4,uVar6,0);
            goto LAB_05c1851c;
          }
        }
        local_28 = *(undefined8 *)(param_1 + 0x128);
        local_2c[0] = '\0';
        FUN_0554bf68(local_28,local_2c,0);
        if (*(char *)(param_1 + 0x125) != '\0') {
          thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
          uVar4 = thunk_FUN_02dd3144();
          uVar6 = thunk_FUN_02dfd288(
                                    Method_System_Collections_Generic_Dictionary<string,_VisualElement>__ctor__
                                    );
          FUN_054e8008(uVar4,uVar6,0);
          uVar6 = thunk_FUN_02dfd288(
                                    Method_System_Collections_Generic_Dictionary<string,_Variant>_set_Item__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar4,uVar6);
        }
        lVar3 = *(long *)(param_1 + 0x110);
        if (lVar3 == 0) {
          *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0xa8);
          LeanTween__value();
          *(undefined1 *)(param_1 + 0x11c) = 1;
          lVar3 = FUN_05c17f2c(param_1,0,0,param_2);
        }
        if (local_2c[0] != '\0') {
          thunk_FUN_02da42ec(local_28,0);
        }
        if (lVar3 != 0) {
          FUN_05c2e83c(lVar3,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      thunk_FUN_02dfd288(Method_System_Collections_Generic_Dictionary<string,_StringBuilder>_Clear__
                        );
      uVar4 = thunk_FUN_02dd3144();
      puVar5 = Method_System_Collections_Generic_Dictionary<string,_VisualElement>_Clear__;
    }
    else {
      thunk_FUN_02dfd288(Method_System_Collections_Generic_Dictionary<string,_StringBuilder>_Clear__
                        );
      uVar4 = thunk_FUN_02dd3144();
      puVar5 = Method_System_Collections_Generic_Dictionary<string,_Variant>_get_Values__;
    }
    uVar6 = thunk_FUN_02dfd288(puVar5);
    FUN_05ce49b4(uVar4,uVar6,0);
  }
LAB_05c1851c:
  uVar6 = thunk_FUN_02dfd288(
                            Method_System_Collections_Generic_Dictionary<string,_Variant>_set_Item__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar4,uVar6);
}


