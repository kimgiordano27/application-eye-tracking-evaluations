/*
FUNCTION_NAME: FUN_05d9ead4
ENTRY_POINT: 05d9ead4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_1;telemetry_or_network_hits_21;frame_or_lifecycle_behavior
*/


undefined8 FUN_05d9ead4(void *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  long **pplVar15;
  code *pcVar16;
  undefined8 local_1c0;
  undefined8 auStack_1b8 [38];
  long *local_88;
  undefined4 local_80;
  undefined2 local_7c [2];
  long *local_78;
  undefined4 local_70;
  undefined1 local_6c [4];
  long *local_68;
  undefined4 local_60;
  undefined2 local_5c [2];
  long *local_58;
  undefined2 local_4c [2];
  undefined1 local_48 [4];
  undefined1 local_44;
  
  if ((DAT_066dbc16 & 1) == 0) {
    FUN_02b3c81c(Method_System_Net_WebRequest_Create__);
    FUN_02b3c81c(Method_System_Net_WebRequest_EndGetResponse__);
    FUN_02b3c81c(Method_System_Net_WebRequest_GetResponse__);
    FUN_02b3c81c(Method_System_Net_WebRequest_get_ContentLength__);
    FUN_02b3c81c(Method_System_Net_WebRequest_get_Credentials__);
    FUN_02b3c81c(Method_System_Net_WebRequest_get_Headers__);
    FUN_02b3c81c(Method_System_Net_WebRequest_get_Method__);
    FUN_02b3c81c(Method_System_Net_WebRequest_get_Proxy__);
    FUN_02b3c81c(Method_System_Net_WebRequest_get_RequestUri__);
    FUN_02b3c81c(Method_System_Net_WebRequest_get_Timeout__);
    FUN_02b3c81c(Method_System_Net_WebRequest_get_UseDefaultCredentials__);
    FUN_02b3c81c(Method_System_Net_WebRequest_set_Credentials__);
    FUN_02b3c81c(Method_System_Net_WebRequest_set_Method__);
    FUN_02b3c81c(Method_System_Net_WebRequest_set_Proxy__);
    FUN_02b3c81c(Method_Unity_Services_Authentication_PlayerAccounts_WebRequest_Build__);
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(PTR_DAT_0631e1d8);
    FUN_02b3c81c(Method_System_Net_Configuration_WebRequestModuleElementCollection__ctor__);
    DAT_066dbc16 = 1;
  }
  local_44 = 0;
  local_48[0] = 0;
  local_4c[0] = 0;
  local_58 = (long *)0x0;
  local_5c[0] = 0;
  local_60 = 0;
  local_68 = (long *)0x0;
  local_6c[0] = 0;
  local_70 = 0;
  local_78 = (long *)0x0;
  local_7c[0] = 0;
  local_80 = 0;
  local_88 = (long *)0x0;
  if ((param_3 != (long *)0x0) &&
     (plVar3 = (long *)thunk_FUN_02b4c898(param_3,0), plVar3 != (long *)0x0)) {
    uVar4 = (**(code **)(*plVar3 + 0x598))(plVar3,*(undefined8 *)(*plVar3 + 0x5a0));
    puVar1 = PTR_DAT_06312310;
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar2 = FUN_04d96104(plVar3,0);
      switch(uVar2) {
      case 3:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x28) + 0x40)) {
LAB_05d9f2f0:
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(param_3);
        }
        puVar13 = (undefined1 *)thunk_FUN_02b7978c(param_3);
        local_44 = *puVar13;
        if (param_2 == (long *)0x0) goto LAB_05d9f2d8;
        lVar7 = thunk_FUN_02b5b75c(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)Method_System_Net_WebRequest_GetResponse__ +
                                             0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)&local_44;
        break;
      case 4:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x88) + 0x40))
        goto LAB_05d9f2f0;
        puVar12 = (undefined2 *)thunk_FUN_02b7978c(param_3);
        local_4c[0] = *puVar12;
        if (param_2 == (long *)0x0) goto LAB_05d9f2d8;
        lVar7 = thunk_FUN_02b5b75c(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_System_Net_WebRequest_get_Credentials__ + 0x50
                                             ) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)local_4c;
        break;
      case 5:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x30) + 0x40))
        goto LAB_05d9f2f0;
        puVar13 = (undefined1 *)thunk_FUN_02b7978c(param_3);
        local_6c[0] = *puVar13;
        if (param_2 == (long *)0x0) goto LAB_05d9f2d8;
        lVar7 = thunk_FUN_02b5b75c(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)Method_System_Net_WebRequest_get_Timeout__ +
                                             0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)local_6c;
        break;
      case 6:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x18) + 0x40))
        goto LAB_05d9f2f0;
        puVar13 = (undefined1 *)thunk_FUN_02b7978c(param_3);
        local_48[0] = *puVar13;
        if (param_2 == (long *)0x0) goto LAB_05d9f2d8;
        lVar7 = thunk_FUN_02b5b75c(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_System_Net_WebRequest_get_ContentLength__ +
                                             0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)local_48;
        break;
      case 7:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x38) + 0x40))
        goto LAB_05d9f2f0;
        puVar12 = (undefined2 *)thunk_FUN_02b7978c(param_3);
        local_5c[0] = *puVar12;
        if (param_2 == (long *)0x0) goto LAB_05d9f2d8;
        lVar7 = thunk_FUN_02b5b75c(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)Method_System_Net_WebRequest_get_Method__ +
                                             0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)local_5c;
        break;
      case 8:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x40) + 0x40))
        goto LAB_05d9f2f0;
        puVar12 = (undefined2 *)thunk_FUN_02b7978c(param_3);
        local_7c[0] = *puVar12;
        if (param_2 == (long *)0x0) goto LAB_05d9f2d8;
        lVar7 = thunk_FUN_02b5b75c(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)Method_System_Net_WebRequest_set_Method__ +
                                             0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)local_7c;
        break;
      case 9:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x48) + 0x40))
        goto LAB_05d9f2f0;
        puVar11 = (undefined4 *)thunk_FUN_02b7978c(param_3);
        local_60 = *puVar11;
        if (param_2 == (long *)0x0) goto LAB_05d9f2d8;
        lVar7 = thunk_FUN_02b5b75c(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)Method_System_Net_WebRequest_get_Proxy__ +
                                             0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)&local_60;
        break;
      case 10:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x50) + 0x40))
        goto LAB_05d9f2f0;
        puVar11 = (undefined4 *)thunk_FUN_02b7978c(param_3);
        local_80 = *puVar11;
        if (param_2 == (long *)0x0) goto LAB_05d9f2d8;
        lVar7 = thunk_FUN_02b5b75c(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)Method_System_Net_WebRequest_set_Proxy__ +
                                             0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)&local_80;
        break;
      case 0xb:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x68) + 0x40))
        goto LAB_05d9f2f0;
        puVar10 = (undefined8 *)thunk_FUN_02b7978c(param_3);
        local_68 = (long *)*puVar10;
        if (param_2 == (long *)0x0) goto LAB_05d9f2d8;
        lVar7 = thunk_FUN_02b5b75c(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)Method_System_Net_WebRequest_get_RequestUri__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = &local_68;
        break;
      case 0xc:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x70) + 0x40))
        goto LAB_05d9f2f0;
        puVar10 = (undefined8 *)thunk_FUN_02b7978c(param_3);
        local_88 = (long *)*puVar10;
        if (param_2 == (long *)0x0) goto LAB_05d9f2d8;
        lVar7 = thunk_FUN_02b5b75c(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_Unity_Services_Authentication_PlayerAccounts_WebRequest_Build__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = &local_88;
        break;
      case 0xd:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x78) + 0x40))
        goto LAB_05d9f2f0;
        puVar11 = (undefined4 *)thunk_FUN_02b7978c(param_3);
        local_70 = *puVar11;
        if (param_2 == (long *)0x0) goto LAB_05d9f2d8;
        lVar7 = thunk_FUN_02b5b75c(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_System_Net_WebRequest_get_UseDefaultCredentials__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)&local_70;
        break;
      case 0xe:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x80) + 0x40))
        goto LAB_05d9f2f0;
        puVar10 = (undefined8 *)thunk_FUN_02b7978c(param_3);
        local_58 = (long *)*puVar10;
        if (param_2 == (long *)0x0) goto LAB_05d9f2d8;
        lVar7 = thunk_FUN_02b5b75c(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)Method_System_Net_WebRequest_get_Headers__ +
                                             0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = &local_58;
        break;
      default:
        auStack_1b8[0] =
             *(undefined8 *)
              Method_System_Net_Configuration_WebRequestModuleElementCollection__ctor__;
        local_1c0 = 1;
        thunk_FUN_02bb0e9c(auStack_1b8);
        return local_1c0;
      case 0x12:
        if (*param_3 != *(long *)(puVar1 + 0x90)) goto LAB_05d9f2f0;
        local_78 = param_3;
        if (param_2 == (long *)0x0) goto LAB_05d9f2d8;
        lVar7 = thunk_FUN_02b5b75c(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_System_Net_WebRequest_set_Credentials__ + 0x50
                                             ) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = &local_78;
      }
      uVar14 = (*pcVar16)(param_2,param_1,pplVar15,lVar7);
      return uVar14;
    }
    plVar5 = (long *)UnityEngine_UIElements_StyleSheets_StylePropertyValueMatcher__get_current();
    plVar6 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_0631e1d8,1);
    if (plVar6 != (long *)0x0) {
      lVar7 = thunk_FUN_02b79548(plVar3,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar7 == 0) goto LAB_05d9f2e0;
      if ((int)plVar6[3] == 0) goto LAB_05d9f2dc;
      plVar6[4] = (long)plVar3;
      thunk_FUN_02bb0e9c(plVar6 + 4,plVar3);
      if (plVar5 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar5 + 0x3f8))(plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x400));
        plVar3 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
        memcpy(&local_1c0,param_1,0x138);
        lVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)Method_System_Net_WebRequest_Create__,&local_1c0);
        if (plVar3 != (long *)0x0) {
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar3 + 0x40)), lVar9 == 0)) {
LAB_05d9f2e0:
            uVar14 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
            FUN_02b3c988(uVar14,0);
          }
          if ((int)plVar3[3] != 0) {
            plVar3[4] = lVar8;
            thunk_FUN_02bb0e9c(plVar3 + 4,lVar8);
            lVar8 = thunk_FUN_02b79548(param_3,*(undefined8 *)(*plVar3 + 0x40));
            if (lVar8 == 0) goto LAB_05d9f2e0;
            if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
              plVar3[5] = (long)param_3;
              thunk_FUN_02bb0e9c(plVar3 + 5,param_3);
              if ((lVar7 != 0) &&
                 (plVar3 = (long *)FUN_04cb7c68(lVar7,param_2,plVar3,0), plVar3 != (long *)0x0)) {
                if (*(long *)(*plVar3 + 0x40) ==
                    *(long *)(*(long *)Method_System_Net_WebRequest_EndGetResponse__ + 0x40)) {
                  puVar10 = (undefined8 *)thunk_FUN_02b7978c();
                  return *puVar10;
                }
                    /* WARNING: Subroutine does not return */
                FUN_02b3ce44();
              }
              goto LAB_05d9f2d8;
            }
          }
LAB_05d9f2dc:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
      }
    }
  }
LAB_05d9f2d8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


