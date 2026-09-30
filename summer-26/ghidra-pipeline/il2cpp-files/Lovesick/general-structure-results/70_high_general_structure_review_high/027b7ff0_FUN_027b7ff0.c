/*
FUNCTION_NAME: FUN_027b7ff0
ENTRY_POINT: 027b7ff0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_4
*/


void FUN_027b7ff0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int *piVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((DAT_03788819 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_BitArray_BitArrayEnumeratorSimple_MoveNext__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IReadOnlyList<OVRSpatialAnchor>>_Create__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<string>_get_Item__);
    thunk_FUN_00d48444(UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_Where<Touch>__);
    thunk_FUN_00d48444(UnityEngine_InspectorNameAttribute_TypeInfo);
    DAT_03788819 = 1;
  }
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  plVar2 = *(long **)(param_1 + 0x98);
  *(undefined1 *)(param_1 + 0xa8) = 0;
  if (plVar2 != (long *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
    if (lVar3 != 0) {
      FUN_0274b840(lVar3,0);
      lVar3 = FUN_027b3148(param_1);
      if ((lVar3 != 0) && (plVar2 = (long *)FUN_027edbe8(lVar3,0), plVar2 != (long *)0x0)) {
        (**(code **)(*plVar2 + 0x268))
                  (plVar2,*(undefined4 *)(param_1 + 0x7c),*(undefined8 *)(*plVar2 + 0x270));
        plVar2 = *(long **)(param_1 + 0xa0);
        if (plVar2 != (long *)0x0) {
          if (plVar2[3] != 0) {
            FUN_011dbaa8(plVar2[3],*(undefined8 *)UnityEngine_InspectorNameAttribute_TypeInfo);
            plVar2 = *(long **)(param_1 + 0xa0);
            if (plVar2 == (long *)0x0) goto LAB_027b83dc;
          }
          if (plVar2[3] != 0) {
            FUN_011dbc2c(plVar2[3],*(undefined8 *)Method_System_Linq_Enumerable_Where<Touch>__);
            plVar2 = *(long **)(param_1 + 0xa0);
            if (plVar2 == (long *)0x0) goto LAB_027b83dc;
          }
          plVar2[3] = 0;
          lVar3 = (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
          if (lVar3 == 0) goto LAB_027b83dc;
          plVar2 = (long *)FUN_0274adf4(lVar3,0);
          auVar8 = FUN_0281d9e8(0,0);
          puVar1 = UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo;
          if (plVar2 == (long *)0x0) goto LAB_027b83dc;
          lVar3 = *plVar2;
          uVar7 = (ulong)*(ushort *)(lVar3 + 0x12a);
          if (uVar7 != 0) {
            piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) ==
                  *(long *)UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo) {
                puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 0x24) * 0x10 + 0x138);
                goto LAB_027b81a4;
              }
              uVar7 = uVar7 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)
                   FUN_00d59724(plVar2,*(long *)UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo,
                                0x24);
LAB_027b81a4:
          (*(code *)*puVar4)(plVar2,auVar8._0_8_,auVar8._8_8_ & 0xffffffff,puVar4[1]);
          lVar3 = FUN_027b3148(param_1);
          if (lVar3 == 0) goto LAB_027b83dc;
          if (*(int *)(lVar3 + 0x430) == 0) {
            plVar2 = *(long **)(param_1 + 0xa0);
            if (plVar2 == (long *)0x0) goto LAB_027b83dc;
            lVar3 = (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
            if (lVar3 == 0) goto LAB_027b83dc;
            plVar2 = (long *)FUN_0274adf4(lVar3,0);
            lVar3 = FUN_027b3148(param_1);
            if (lVar3 == 0) goto LAB_027b83dc;
            FUN_027edc48(0xbf800000,lVar3,0);
            auVar8 = FUN_0281d9e8(0);
            if (plVar2 == (long *)0x0) goto LAB_027b83dc;
            lVar3 = *plVar2;
            uVar7 = (ulong)*(ushort *)(lVar3 + 0x12a);
            if (uVar7 != 0) {
              piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                  puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 0x17) * 0x10 + 0x138);
                  goto LAB_027b8270;
                }
                uVar7 = uVar7 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined8 *)FUN_00d59724(plVar2,*(long *)puVar1,0x17);
LAB_027b8270:
            (*(code *)*puVar4)(plVar2,auVar8._0_8_,auVar8._8_8_ & 0xffffffff,puVar4[1]);
          }
        }
        puVar1 = Method_System_Collections_BitArray_BitArrayEnumeratorSimple_MoveNext__;
        local_70 = *(undefined8 *)(param_1 + 0x98);
        local_80 = *(undefined4 *)(param_1 + 0x7c);
        local_7c = 0;
        local_74 = 0;
        local_68 = DAT_028ab160;
        FUN_027b478c(&local_60,param_1,&local_80);
        plVar2 = *(long **)(param_1 + 0x70);
        uStack_98 = uStack_58;
        local_a0 = local_60;
        uStack_88 = uStack_48;
        uStack_90 = uStack_50;
        uVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&local_a0);
        if (plVar2 != (long *)0x0) {
          lVar3 = *plVar2;
          uVar7 = (ulong)*(ushort *)(lVar3 + 0x12a);
          if (uVar7 != 0) {
            piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) ==
                  *(long *)
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IReadOnlyList<OVRSpatialAnchor>>_Create__
                 ) {
                puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 3) * 0x10 + 0x138);
                goto LAB_027b8338;
              }
              uVar7 = uVar7 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)
                   FUN_00d59724(plVar2,*(long *)
                                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IReadOnlyList<OVRSpatialAnchor>>_Create__
                                ,3);
LAB_027b8338:
          (*(code *)*puVar4)(plVar2,uVar5,puVar4[1]);
          plVar2 = (long *)FUN_027b9fa8(param_1,0);
          if (plVar2 != (long *)0x0) {
            lVar3 = *plVar2;
            uVar7 = (ulong)*(ushort *)(lVar3 + 0x12a);
            if (uVar7 != 0) {
              piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) ==
                    *(long *)
                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<string>_get_Item__) {
                  puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                  goto LAB_027b83b4;
                }
                uVar7 = uVar7 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined8 *)
                     FUN_00d59724(plVar2,*(long *)
                                          Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<string>_get_Item__
                                  ,2);
LAB_027b83b4:
            (*(code *)*puVar4)(plVar2,puVar4[1]);
            *(long *)(param_1 + 0x98) = 0;
            *(undefined8 *)(param_1 + 0xa0) = 0;
            return;
          }
        }
      }
    }
  }
LAB_027b83dc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


