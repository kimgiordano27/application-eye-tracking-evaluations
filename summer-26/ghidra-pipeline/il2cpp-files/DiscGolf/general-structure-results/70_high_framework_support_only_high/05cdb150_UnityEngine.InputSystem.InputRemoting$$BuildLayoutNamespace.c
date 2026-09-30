/*
FUNCTION_NAME: UnityEngine.InputSystem.InputRemoting$$BuildLayoutNamespace
ENTRY_POINT: 05cdb150
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x05cdb314) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UnityEngine_InputSystem_InputRemoting__BuildLayoutNamespace(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long *plVar12;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x900));
  FUN_02d965b8(PTR_DAT_06a0d2b8);
  FUN_02d965b8(
              Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
              );
  *(undefined1 *)(unaff_x19 + 0xd35) = 1;
  if (unaff_x20 != (long *)0x0) {
    lVar9 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06a0d2b8) {
          puVar2 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto UnityEngine_InputSystem_InputRemoting__FindLocalDeviceId;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c();
UnityEngine_InputSystem_InputRemoting__FindLocalDeviceId:
    plVar3 = (long *)(*(code *)*puVar2)();
    if (plVar3 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)
                         Method_UnityEngine_UIElements_UIR_Utility_GPUBuffer<ushort>_get_BufferPointer__
                       + 0x130);
      if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_UnityEngine_UIElements_UIR_Utility_GPUBuffer<ushort>_get_BufferPointer__))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar3);
      }
      plVar12 = plVar3 + 0x11;
      lVar9 = *plVar12;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar4 = FUN_05c41854();
      *plVar12 = lVar4;
      LeanTween__value(plVar12);
      plVar5 = (long *)FUN_05ce858c(plVar3,0);
      if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      plVar6 = (long *)FUN_05c40a04(*plVar12,0);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      bVar1 = *(byte *)(*(long *)
                         Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                       + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)
           Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0();
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar10 = (**(code **)(*plVar5 + 0x138))(plVar5,plVar6[2],*(undefined8 *)(*plVar5 + 0x140));
      if ((uVar10 & 1) == 0) {
        if (*plVar12 != 0) {
          FUN_05c44d2c(*plVar12,0);
          thunk_FUN_02dfd288(PTR_DAT_06a10338);
          uVar7 = thunk_FUN_02dd3144();
          uVar8 = thunk_FUN_02dfd288(
                                    Method_UnityEngine_UIElements_UIR_Utility_GPUBuffer<Vertex>_get_BufferPointer__
                                    );
          FUN_05ce56b4(uVar7,uVar8,7,0);
          uVar8 = thunk_FUN_02dfd288(Method_UnityEngine_Pool_GenericPool<XRLayout>_Get__);
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar7,uVar8);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_05cd9288(plVar3);
      if (lVar9 != 0) {
        FUN_05c44d2c(lVar9,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


