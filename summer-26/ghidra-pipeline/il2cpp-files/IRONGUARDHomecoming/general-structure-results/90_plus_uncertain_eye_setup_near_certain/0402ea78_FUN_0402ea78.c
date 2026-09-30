/*
FUNCTION_NAME: FUN_0402ea78
ENTRY_POINT: 0402ea78
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0402ed10) */
/* WARNING: Removing unreachable block (ram,0x0402ed14) */
/* WARNING: Removing unreachable block (ram,0x0402ed60) */

undefined8 FUN_0402ea78(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  
  puVar2 = PTR_DAT_045863c8;
  if ((DAT_0483c57e & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_045863c8);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__);
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputManager_StateChangeMonitorsForDevice>__);
    thunk_FUN_01efb3a4(Method_System_Array_Copy__);
    thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_045863d0);
    thunk_FUN_01efb3a4(PTR_DAT_045863d8);
    thunk_FUN_01efb3a4(PTR_DAT_045863e0);
    DAT_0483c57e = 1;
  }
  if (**(long **)(*(long *)puVar2 + 0xb8) == 0) {
    plVar4 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__
                                       );
    uVar6 = *(undefined8 *)PTR_DAT_045863d8;
    FUN_035ac8e8(plVar4,0);
    FUN_0402d3ac(plVar4,uVar6);
    puVar1 = Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__;
    lVar11 = *(long *)Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__;
    lVar8 = *(long *)(lVar11 + 0x38);
    if (lVar8 == 0) {
      FUN_01ecafa0(lVar11);
      lVar8 = *(long *)(lVar11 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar8 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44();
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = FUN_021588f4(plVar4,*(undefined8 *)PTR_DAT_045863d0,**(undefined8 **)(lVar8 + 0xb8),
                         *(undefined8 *)
                          Method_System_Array_Resize<InputManager_StateChangeMonitorsForDevice>__);
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar6;
    thunk_FUN_01f51358(*(undefined8 *)(*(long *)puVar2 + 0xb8));
    lVar12 = *(long *)puVar1;
    lVar8 = *(long *)(lVar12 + 0x38);
    lVar11 = **(long **)(*(long *)puVar2 + 0xb8);
    if (lVar8 == 0) {
      FUN_01ecafa0(lVar12);
      lVar8 = *(long *)(lVar12 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar8 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44();
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    bVar3 = FUN_02157ecc(lVar11,*(undefined8 *)PTR_DAT_045863e0,**(undefined8 **)(lVar8 + 0xb8),
                         *(undefined8 *)Method_System_Array_Copy__);
    *(byte *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = bVar3 & 1;
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0402ecf8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0402ecf8:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  if (*(char *)(*(undefined8 **)(*(long *)puVar2 + 0xb8) + 1) == '\0') {
    return **(undefined8 **)(*(long *)puVar2 + 0xb8);
  }
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
  uVar7 = thunk_FUN_01efb3a4(PTR_DAT_045863e8);
  FUN_0356adc8(uVar6,uVar7,0);
  uVar7 = thunk_FUN_01efb3a4(PTR_DAT_045863f0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,uVar7);
}


