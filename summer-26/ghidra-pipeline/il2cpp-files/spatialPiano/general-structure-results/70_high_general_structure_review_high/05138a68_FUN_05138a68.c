/*
FUNCTION_NAME: FUN_05138a68
ENTRY_POINT: 05138a68
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05138dec) */
/* WARNING: Removing unreachable block (ram,0x05138e1c) */
/* WARNING: Removing unreachable block (ram,0x05138e24) */

void FUN_05138a68(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long local_80;
  ulong uStack_78;
  undefined4 local_68;
  
  if ((DAT_06bb9f82 & 1) == 0) {
    FUN_02f08768(System_Action<ARRaycastUpdatedEventArgs>_TypeInfo);
    FUN_02f08768(System_Action<ARSessionStateChangedEventArgs>_TypeInfo);
    FUN_02f08768(PTR_DAT_067cbd90);
    FUN_02f08768(System_Action<ARTrackablesParentTransformChangedEventArgs>_TypeInfo);
    FUN_02f08768(System_Action<ARTrackedImagesChangedEventArgs>_TypeInfo);
    FUN_02f08768(System_Action<ARTrackedObjectsChangedEventArgs>_TypeInfo);
    FUN_02f08768(System_Action<AccessibilityNode>_TypeInfo);
    FUN_02f08768(System_Action<ChangeEvent<bool>>_TypeInfo);
    DAT_06bb9f82 = 1;
  }
  lVar17 = *(long *)(param_1 + 0x18);
  local_68 = 0;
  thunk_FUN_02f168c4();
  puVar6 = System_Action<ARTrackablesParentTransformChangedEventArgs>_TypeInfo;
  puVar5 = System_Action<ARSessionStateChangedEventArgs>_TypeInfo;
  puVar4 = System_Action<ARRaycastUpdatedEventArgs>_TypeInfo;
  puVar3 = System_Action<ChangeEvent<bool>>_TypeInfo;
  puVar2 = PTR_DAT_067cbd90;
  if (lVar17 == 0) {
    thunk_FUN_02f168c4();
    thunk_FUN_02f41aac(param_1 + 0x20,3,0);
    return;
  }
  if (0 < (int)*(ulong *)(lVar17 + 0x18)) {
    uVar13 = 0;
    uVar14 = 0;
    uVar12 = *(ulong *)(lVar17 + 0x18) & 0xffffffff;
    do {
      if (uVar12 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar15 = *(long *)(lVar17 + 0x20 + uVar13 * 8);
      thunk_FUN_02f168c4();
      if (lVar15 != 0) {
        for (lVar15 = FUN_042e4b70(lVar15,*(undefined8 *)System_Action<AccessibilityNode>_TypeInfo);
            lVar15 != 0;
            lVar15 = FUN_042e4a7c(lVar15,*(undefined8 *)
                                          System_Action<ARTrackedObjectsChangedEventArgs>_TypeInfo))
        {
          iVar7 = FUN_042e4a64(lVar15,*(undefined8 *)
                                       System_Action<ARTrackedImagesChangedEventArgs>_TypeInfo);
          uVar12 = (ulong)(iVar7 - 1U);
          if (-1 < (int)(iVar7 - 1U)) {
            do {
              lVar9 = FUN_042e4a2c(lVar15,uVar12 & 0xffffffff,*(undefined8 *)puVar6);
              thunk_FUN_02f168c4();
              *(long *)(param_1 + 0x30) = lVar9;
              thunk_FUN_02f168c4();
              if (lVar9 != 0) {
                plVar16 = *(long **)(param_1 + 0x30);
                uVar14 = uVar12 + (uVar14 & 0xffffffff00000000);
                thunk_FUN_02f168c4();
                if ((plVar16 == (long *)0x0) || (*plVar16 != *(long *)puVar3)) {
                  FUN_05138f4c(param_1,lVar15,uVar14);
                }
                else {
                  plVar16 = (long *)plVar16[6];
                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                  FUN_0513585c(uVar10,param_1,*(undefined8 *)puVar5);
                  local_80 = lVar15;
                  uStack_78 = uVar14;
                  uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)puVar4,&local_80);
                  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089c8();
                  }
                  (**(code **)(*plVar16 + 0x178))
                            (plVar16,uVar10,uVar11,*(undefined8 *)(*plVar16 + 0x180));
                  uVar8 = FUN_0511a4e4(0);
                  thunk_FUN_02f168c4();
                  *(undefined4 *)(param_1 + 0x24) = uVar8;
                }
              }
              bVar1 = 0 < (long)uVar12;
              uVar12 = uVar12 - 1;
            } while (bVar1);
          }
        }
      }
      uVar12 = (ulong)*(uint *)(lVar17 + 0x18);
      uVar13 = uVar13 + 1;
    } while ((long)uVar13 < (long)(int)*(uint *)(lVar17 + 0x18));
  }
  thunk_FUN_02f168c4();
  *(undefined4 *)(param_1 + 0x20) = 3;
  thunk_FUN_02f168c4();
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_0514401c(0);
  return;
}


