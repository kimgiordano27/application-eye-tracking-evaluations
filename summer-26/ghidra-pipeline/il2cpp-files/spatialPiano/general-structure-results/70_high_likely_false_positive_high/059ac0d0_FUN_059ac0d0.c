/*
FUNCTION_NAME: FUN_059ac0d0
ENTRY_POINT: 059ac0d0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_059ac0d0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long local_38;
  
  puVar2 = Method_System_Collections_Generic_List<UIDocument>_Insert__;
  if ((DAT_06bc1bbd & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8fb0);
    FUN_02f08768(Method_System_Collections_Generic_List<UIDocument>_Insert__);
    FUN_02f08768(PTR_DAT_067cbf80);
    FUN_02f08768(PTR_DAT_067cbf70);
    FUN_02f08768(Method_System_Collections_Generic_List<UIVertex>__ctor__);
    FUN_02f08768(PTR_DAT_067cbfa0);
    FUN_02f08768(PTR_DAT_067cbfa8);
    FUN_02f08768(Method_System_Collections_Generic_List<UIVertex>_Add__);
    FUN_02f08768(Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveEvent>__ctor__);
    FUN_02f08768(Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveEvent>_Init__);
    FUN_02f08768(Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>__ctor__);
    FUN_02f08768(Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_GetPooled__);
    FUN_02f08768(Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_Init__);
    FUN_02f08768(Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_PostDispatch__)
    ;
    FUN_02f08768(
                Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_get_mousePosition__
                );
    FUN_02f08768(
                Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_get_pressedButtons__
                );
    DAT_06bc1bbd = 1;
  }
  puVar6 = Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_get_pressedButtons__;
  puVar5 = Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveEvent>__ctor__;
  puVar4 = Method_System_Collections_Generic_List<UIVertex>_Add__;
  puVar3 = Method_System_Collections_Generic_List<UIVertex>__ctor__;
  puVar1 = PTR_DAT_067c8fb0;
  local_38 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_059531d0(param_1,0);
  FUN_0624193c(param_1,*(undefined8 *)puVar6,0);
  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  FUN_05054f60(uVar7,param_1,*(undefined8 *)puVar5,0);
  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
  FUN_059e1f74(uVar8,uVar7,0);
  FUN_059ac4e0(param_1,uVar8);
  (**(code **)(*param_1 + 0x248))(param_1,1,*(undefined8 *)(*param_1 + 0x250));
  FUN_0623f468(param_1,0,0);
  FUN_0636f0c8(param_1,0,0);
  lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
  FUN_0598c530(lVar9,0);
  puVar3 = Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_get_mousePosition__;
  puVar1 = Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_GetPooled__;
  puVar2 = PTR_DAT_067cbf70;
  if (lVar9 != 0) {
    FUN_0623f514(lVar9,*(undefined8 *)
                        Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_get_mousePosition__
                 ,0);
    FUN_0598c0b0(lVar9,*(undefined8 *)puVar1,0);
    FUN_0623f468(lVar9,1,0);
    FUN_0624193c(lVar9,*(undefined8 *)puVar3,0);
    lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
    FUN_059890fc(lVar10,0);
    puVar1 = Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_Init__;
    puVar2 = PTR_DAT_067cbfa8;
    if (lVar10 != 0) {
      FUN_0623f514(lVar10,*(undefined8 *)
                           Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_Init__
                   ,0);
      FUN_0623f468(lVar10,1,0);
      FUN_05987b50(lVar10,0,0);
      uVar7 = *(undefined8 *)puVar1;
      param_1[0x5d] = lVar10;
      FUN_0624193c(lVar10,uVar7,0);
      lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
      FUN_059a1d50(lVar10,0);
      puVar2 = Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_PostDispatch__;
      if (lVar10 != 0) {
        FUN_0623f514(lVar10,*(undefined8 *)
                             Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_PostDispatch__
                     ,0);
        FUN_0623f468(lVar10,1,0);
        uVar7 = *(undefined8 *)puVar2;
        param_1[0x5a] = lVar10;
        FUN_0624193c(lVar10,uVar7,0);
        puVar4 = Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>__ctor__;
        puVar3 = Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveEvent>_Init__;
        puVar1 = PTR_DAT_067cbfa0;
        puVar2 = PTR_DAT_067cbf80;
        if (param_1[0x5d] != 0) {
          local_38 = *(long *)(param_1[0x5d] + 0x260);
          FUN_0624b7dc(&local_38,lVar9,0);
          local_38 = param_1[0x4c];
          FUN_0624b7dc(&local_38,param_1[0x5d],0);
          local_38 = param_1[0x4c];
          FUN_0624b7dc(&local_38,param_1[0x5a],0);
          FUN_059ac544(param_1,2);
          FUN_059ac610(param_1,0);
          FUN_059ac6d0(param_1,0);
          FUN_059ac790(param_1,0);
          uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
          FUN_04d8cf5c(uVar7,param_1,*(undefined8 *)puVar3,0);
          uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
          FUN_04d8cf5c(uVar8,param_1,*(undefined8 *)puVar4,0);
          uVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
          FUN_059e3888(uVar11,uVar7,uVar8,0,0);
          FUN_06296d34(param_1,uVar11,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


