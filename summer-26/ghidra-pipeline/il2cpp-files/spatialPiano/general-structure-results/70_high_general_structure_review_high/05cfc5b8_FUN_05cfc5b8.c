/*
FUNCTION_NAME: FUN_05cfc5b8
ENTRY_POINT: 05cfc5b8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_7;telemetry_or_network_hits_4
*/


void FUN_05cfc5b8(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4,
                 long *param_5)

{
  ulong uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  float fVar19;
  
  if ((DAT_06bc356a & 1) == 0) {
    FUN_02f08768(Unity_Properties_TypeConverter<short,_long>_TypeInfo);
    FUN_02f08768(System_WeakReference<VisualElement>_TypeInfo);
    FUN_02f08768(
                Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<QuerySamplingFrequencyCommand>__
                );
    FUN_02f08768(Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<RequestResetCommand>__);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<RequestSyncCommand>__);
    DAT_06bc356a = 1;
  }
  puVar6 = Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<RequestSyncCommand>__;
  if (param_5 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)
                       Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<QuerySamplingFrequencyCommand>__
                     + 0x130);
    if ((bVar2 <= *(byte *)(*param_5 + 0x130)) &&
       (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)
         Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<QuerySamplingFrequencyCommand>__)
       ) {
      uVar10 = FUN_05c5928c(param_5,0);
      goto LAB_05cfc68c;
    }
  }
  uVar10 = 0;
LAB_05cfc68c:
  uVar11 = FUN_02f0880c(*(undefined8 *)puVar6,uVar10);
  *(undefined8 *)(param_4 + 0x80) = uVar11;
  puVar9 = Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<RequestResetCommand>__;
  puVar8 = System_WeakReference<VisualElement>_TypeInfo;
  puVar7 = Unity_Properties_TypeConverter<short,_long>_TypeInfo;
  puVar6 = PTR_DAT_067c9848;
  uVar5 = DAT_011b0058;
  uVar4 = DAT_011afe80;
  uVar3 = DAT_011afdd4;
  if (0 < (int)uVar10) {
    uVar15 = 0x43660000;
    uVar18 = 0;
    do {
      uVar17 = *(undefined8 *)(param_4 + 0x68);
      uVar11 = FUN_060ed7ac(param_4,0);
      if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f20);
      }
      lVar12 = FUN_03497c3c(uVar17,uVar11,*(undefined8 *)puVar9);
      if ((lVar12 == 0) || (lVar13 = FUN_060ed7ac(lVar12,0), lVar13 == 0)) {
LAB_05cfc924:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      fVar19 = (float)FUN_060ffbe4(lVar13,0);
      lVar13 = FUN_060ed7ac(lVar12,0);
      if (lVar13 == 0) goto LAB_05cfc924;
      FUN_060ffcc0((230.0 / (float)(int)uVar10) * (float)((int)uVar18 + 1) + fVar19,uVar15,param_3,
                   lVar13,0);
      lVar13 = FUN_060ed7ac(lVar12,0);
      if ((lVar13 == 0) || (lVar13 = FUN_06102118(lVar13,0,0), lVar13 == 0)) goto LAB_05cfc924;
      plVar14 = (long *)FUN_03356750(lVar13,*(undefined8 *)puVar7);
      uVar11 = FUN_060cd288(0);
      if (DAT_06bb435f == '\0') {
        FUN_02f08768(puVar6);
        DAT_06bb435f = '\x01';
      }
      puVar16 = *(undefined4 **)(*(long *)puVar6 + 0xb8);
      uVar11 = FUN_0609fa20(0xbf800000,0xbf800000,0x40000000,0x40000000,*puVar16,puVar16[1],uVar11,0
                           );
      if (plVar14 == (long *)0x0) goto LAB_05cfc924;
      FUN_061d9968(plVar14,uVar11,0);
      (**(code **)(*plVar14 + 0x2a8))
                (uVar4,uVar4,uVar4,uVar3,plVar14,*(undefined8 *)(*plVar14 + 0x2b0));
      lVar13 = FUN_060ed7ac(plVar14,0);
      if (((lVar13 == 0) || (lVar13 = FUN_06102118(lVar13,0,0), lVar13 == 0)) ||
         (plVar14 = (long *)FUN_03356750(lVar13,*(undefined8 *)puVar7), plVar14 == (long *)0x0))
      goto LAB_05cfc924;
      uVar15 = uVar5;
      param_3 = uVar5;
      (**(code **)(*plVar14 + 0x2a8))
                (uVar5,uVar5,uVar5,0x3f800000,plVar14,*(undefined8 *)(*plVar14 + 0x2b0));
      plVar14 = *(long **)(param_4 + 0x80);
      lVar12 = FUN_03356750(lVar12,*(undefined8 *)puVar8);
      if (plVar14 == (long *)0x0) goto LAB_05cfc924;
      if ((lVar12 != 0) &&
         (lVar13 = thunk_FUN_02f45174(lVar12,*(undefined8 *)(*plVar14 + 0x40)), lVar13 == 0)) {
        uVar11 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar11,0);
      }
      if (*(uint *)(plVar14 + 3) <= uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      uVar1 = uVar18 + 1;
      plVar14[uVar18 + 4] = lVar12;
      uVar18 = uVar1;
    } while (uVar10 != uVar1);
  }
  FUN_05cfc288(param_4,param_5);
  return;
}


