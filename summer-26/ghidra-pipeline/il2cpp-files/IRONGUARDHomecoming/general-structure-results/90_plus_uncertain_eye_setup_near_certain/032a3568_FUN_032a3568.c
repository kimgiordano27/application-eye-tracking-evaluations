/*
FUNCTION_NAME: FUN_032a3568
ENTRY_POINT: 032a3568
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x032a382c) */

void FUN_032a3568(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_04831e0d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* try { // try from 032a3598 to 033a35a7 has its CatchHandler @ 032a367c */
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_7__);
                    /* try { // try from 032a35a8 to 033a366b has its CatchHandler @ 032a31cc */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_0__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_FixedStringMethods_Append<FixedString32Bytes>__);
    DAT_04831e0d = 1;
  }
  puVar1 = Method_Unity_Collections_FixedStringMethods_Append<FixedString32Bytes>__;
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 8))(param_1);
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x18) + 0x135) & 1) == 0)
    {
      FUN_01ecaf44();
    }
    uVar4 = thunk_FUN_01f117cc();
    lVar8 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    (*(code *)**(undefined8 **)(lVar8 + 0x20))(uVar4,param_1,*(undefined8 *)(lVar8 + 0x10));
    lVar8 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x28))
                      (param_1,*(undefined8 *)puVar1,uVar4);
    if (lVar8 != 0) {
      uVar4 = FUN_03fe3c18(lVar8,0);
                    /* try { // try from 032a366c to 033a366f has its CatchHandler @ 032a3678 */
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x30))
                (param_1,uVar4);
      lVar8 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x38))
                        (param_1);
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      if (lVar8 != 0) {
        plVar5 = (long *)FUN_0265d924(lVar8,*(undefined8 *)
                                             Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_0__
                                     );
        puVar3 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_7__;
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar8 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_032a3710;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_032a3710:
          uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((uVar9 & 1) == 0) goto LAB_032a37ac;
          lVar8 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_032a376c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_032a376c:
          uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          uVar7 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x40))
                            (param_1);
          thunk_FUN_03fe9acc(param_1,uVar4,uVar7,0);
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_032a37ac:
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_032a3800;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_032a3800:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  return;
}


