/*
FUNCTION_NAME: FUN_03558d5c
ENTRY_POINT: 03558d5c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


uint FUN_03558d5c(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5,int param_6,char param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined1 local_84 [4];
  undefined8 local_80;
  undefined8 uStack_78;
  int local_70;
  undefined8 local_68;
  
  if ((DAT_0453786e & 1) == 0) {
    FUN_01c5d288(PTR_DAT_042303a0);
    FUN_01c5d288(Method_Oculus_Platform_Message<RejoinDialogResult>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Message<UserCapabilityList>_get_Data__);
    FUN_01c5d288(Method_Oculus_Platform_Message<RejoinDialogResult>_get_Data__);
    FUN_01c5d288(Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_PostDispatch__);
    FUN_01c5d288(Method_System_Memory<byte>_get_Span__);
    FUN_01c5d288(PTR_DAT_042396a0);
    FUN_01c5d288(PTR_DAT_0422fd68);
    FUN_01c5d288(Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_get_button__);
    FUN_01c5d288(Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_get_isPrimary__);
    FUN_01c5d288(
                Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_get_localPosition__
                );
    DAT_0453786e = 1;
  }
  local_68 = 0;
  if (2 < *(byte *)(param_1 + 8)) {
    plVar12 = (long *)param_1[9];
    lVar5 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,6);
    if (lVar5 == 0) goto Mono_Unity_UnityTlsProvider__get_ID;
    uVar4 = (uint)*(undefined8 *)(lVar5 + 0x18);
    if (uVar4 == 0) {
LAB_035591e4:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    *(undefined8 *)(lVar5 + 0x20) =
         *(undefined8 *)
          Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_get_localPosition__;
    if (param_4 == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(*param_4 + 0x168))(param_4,*(undefined8 *)(*param_4 + 0x170));
      uVar4 = (uint)*(undefined8 *)(lVar5 + 0x18);
    }
    if ((((uVar4 < 2) || (*(undefined8 *)(lVar5 + 0x28) = uVar6, uVar4 == 2)) ||
        (*(undefined8 *)(lVar5 + 0x30) =
              *(undefined8 *)
               Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_get_isPrimary__,
        uVar4 < 4)) ||
       (*(undefined8 *)(lVar5 + 0x38) = param_5,
       puVar1 = Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_PostDispatch__,
       uVar4 == 4)) goto LAB_035591e4;
    *(undefined8 *)(lVar5 + 0x40) =
         *(undefined8 *)
          Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_get_button__;
    local_80 = *(undefined8 *)puVar1;
    uStack_78 = 0xffffffffffffffff;
    local_70 = param_6;
    uVar6 = FUN_03307544(&local_80,0);
    if (*(uint *)(lVar5 + 0x18) < 6) goto LAB_035591e4;
    *(undefined8 *)(lVar5 + 0x48) = uVar6;
    uVar6 = FUN_031533cc(lVar5,0);
    if (plVar12 == (long *)0x0) goto Mono_Unity_UnityTlsProvider__get_ID;
    lVar5 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)Method_System_Memory<byte>_get_Span__) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03558f78;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01c72498(plVar12,*(long *)Method_System_Memory<byte>_get_Span__,0);
LAB_03558f78:
    (*(code *)*puVar7)(plVar12,3,uVar6,puVar7[1]);
  }
  puVar3 = Method_Oculus_Platform_Message<UserCapabilityList>_get_Data__;
  puVar1 = Method_Oculus_Platform_Message<RejoinDialogResult>__ctor__;
  puVar2 = PTR_DAT_042396a0;
  lVar5 = thunk_FUN_01c496e0(*(undefined8 *)
                              Method_Oculus_Platform_Message<RejoinDialogResult>_get_Data__);
  FUN_0286d364(lVar5,*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_042303a0;
  if ((param_4 != (long *)0x0) && (param_4[5] != 0)) {
    if (lVar5 == 0) {
Mono_Unity_UnityTlsProvider__get_ID:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    FUN_0286dcc8(lVar5,0xdd,param_4[5],*(undefined8 *)puVar3);
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar8 = *(long *)puVar2;
    }
    uVar4 = (**(code **)(*param_1 + 0x228))
                      (param_1,0xe7,lVar5,**(undefined8 **)(lVar8 + 0xb8),
                       *(undefined8 *)(*param_1 + 0x230));
    goto LAB_035591c0;
  }
  if ((param_6 == 10) && (param_7 != '\0')) {
    thunk_FUN_01c273e8(PTR_DAT_04230a40);
    uVar6 = thunk_FUN_01c496e0();
    uVar9 = thunk_FUN_01c273e8(
                              Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_get_pointerId__
                              );
    FUN_032cd310(uVar6,uVar9,0);
    uVar9 = thunk_FUN_01c273e8(
                              Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_get_pointerType__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar6,uVar9);
  }
  local_80 = CONCAT71(local_80._1_7_,param_7);
  uVar6 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042303a0,&local_80);
  if (lVar5 == 0) goto Mono_Unity_UnityTlsProvider__get_ID;
  FUN_0286dcc8(lVar5,0xc3,uVar6,*(undefined8 *)puVar3);
  local_84[0] = (undefined1)param_6;
  uVar6 = thunk_FUN_01c49334(*(undefined8 *)puVar1,local_84);
  FUN_0286dcc8(lVar5,0xc1,uVar6,*(undefined8 *)puVar3);
  FUN_0286dcc8(lVar5,0xdc,param_3,*(undefined8 *)puVar3);
  FUN_0286dcc8(lVar5,0xe0,param_2,*(undefined8 *)puVar3);
  uVar10 = FUN_031532a8(param_5,0);
  if ((uVar10 & 1) == 0) {
    FUN_0286dcc8(lVar5,0xd2,param_5,*(undefined8 *)puVar3);
  }
  if (param_4 != (long *)0x0) {
    uVar10 = FUN_031532a8(param_4[6],0);
    if ((uVar10 & 1) == 0) {
      FUN_0286dcc8(lVar5,0xe1,param_4[6],*(undefined8 *)puVar3);
    }
    if ((char)param_4[2] != -1) {
      local_80 = CONCAT71(local_80._1_7_,(char)param_4[2]);
      uVar6 = thunk_FUN_01c49334(*(undefined8 *)puVar1,&local_80);
      FUN_0286dcc8(lVar5,0xd9,uVar6,*(undefined8 *)puVar3);
      lVar8 = param_4[5];
      if (lVar8 == 0) {
        uVar10 = FUN_031532a8(param_4[3],0);
        if ((uVar10 & 1) == 0) {
          FUN_0286dcc8(lVar5,0xd8,param_4[3],*(undefined8 *)puVar3);
        }
        lVar8 = param_4[4];
        if (lVar8 == 0) goto LAB_03559174;
        uVar9 = *(undefined8 *)puVar3;
        uVar6 = 0xd6;
      }
      else {
        uVar9 = *(undefined8 *)puVar3;
        uVar6 = 0xdd;
      }
      FUN_0286dcc8(lVar5,uVar6,lVar8,uVar9);
    }
  }
LAB_03559174:
  local_68 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_035317a4(&local_68,1,0);
  local_68._0_5_ = CONCAT14(1,(undefined4)local_68);
  uVar4 = (**(code **)(*param_1 + 0x228))
                    (param_1,0xe7,lVar5,local_68,*(undefined8 *)(*param_1 + 0x230));
LAB_035591c0:
  return uVar4 & 1;
}


