/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04f3a2e4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_SpaceQueryResult>
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x19;
  ulong __n;
  undefined1 *__dest;
  ulong uVar8;
  undefined8 unaff_x23;
  long unaff_x25;
  undefined1 *__s;
  undefined1 *__src;
  undefined8 uVar9;
  long unaff_x29;
  
  __n = (ulong)*(uint *)(**(long **)(unaff_x25 + 0x38) + 0xfc);
  uVar8 = __n + 0xf & 0x1fffffff0;
  __src = &stack0x00000000 + -uVar8;
  __dest = __src + -uVar8;
  __s = __dest + -uVar8;
  *(undefined8 *)(unaff_x29 + -0x10) = 0;
  memset(__s,0,__n);
  memset(__s + -uVar8,0,__n);
  uVar8 = FUN_041ba610();
  if ((uVar8 & 1) == 0) {
    memset(__s,0,__n);
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x28) = unaff_x23;
    puVar1 = PTR_DAT_091a1be8;
    uVar9 = *(undefined8 *)(*(long *)(unaff_x25 + 0x38) + 8);
    if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar9 = FUN_07186ef4(uVar9,0);
    uVar5 = FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_49657_091b4cf0,0);
    uVar8 = FUN_07190474(uVar9,uVar5,0);
    puVar2 = PTR_DAT_091a0d58;
    if ((uVar8 & 1) == 0) {
      uVar9 = *(undefined8 *)(*(long *)(unaff_x25 + 0x38) + 8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar9 = FUN_07186ef4(uVar9,0);
      uVar5 = FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_50292_091adf30,0);
      uVar8 = FUN_07190474(uVar9,uVar5,0);
      if ((uVar8 & 1) == 0) {
        uVar9 = *(undefined8 *)(*(long *)(unaff_x25 + 0x38) + 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        uVar9 = FUN_07186ef4(uVar9,0);
        uVar5 = FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_50294_091ade90,0);
        uVar8 = FUN_07190474(uVar9,uVar5,0);
        if ((uVar8 & 1) == 0) {
          uVar9 = *(undefined8 *)(*(long *)(unaff_x25 + 0x38) + 8);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          plVar6 = (long *)FUN_07186ef4(uVar9,0);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          uVar8 = (**(code **)(*plVar6 + 0x5c8))(plVar6,*(undefined8 *)(*plVar6 + 0x5d0));
          uVar9 = *(undefined8 *)(*(long *)(unaff_x25 + 0x38) + 8);
          if ((uVar8 & 1) == 0) {
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            uVar9 = FUN_07186ef4(uVar9,0);
            uVar5 = FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_50861_091adf38,0);
            uVar8 = FUN_07190474(uVar9,uVar5,0);
            if ((uVar8 & 1) == 0) {
              uVar9 = *(undefined8 *)(*(long *)(unaff_x25 + 0x38) + 0x10);
              lVar7 = thunk_FUN_03d1e194(PTR_DAT_091a1be8);
              if (*(int *)(lVar7 + 0xe0) == 0) {
                thunk_FUN_03db619c();
              }
              uVar9 = FUN_07186ef4(uVar9,0);
              uVar5 = thunk_FUN_03d1e194(PTR_DAT_091f9900);
              uVar9 = FUN_06fd2898(uVar5,uVar9,*(undefined8 *)(unaff_x29 + -0x28),0);
              thunk_FUN_03d1e194(PTR_DAT_091aa550);
              uVar5 = thunk_FUN_03d2ef40();
              Newtonsoft_Json_Serialization_JsonFormatterConverter__ToInt16(uVar5,uVar9,0);
                    /* WARNING: Subroutine does not return */
              FUN_03d2d414(uVar5);
            }
            plVar6 = *(long **)(unaff_x29 + -0x10);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            plVar6 = (long *)(**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170))
            ;
          }
          else {
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            uVar9 = FUN_07186ef4(uVar9,0);
            uVar5 = *(undefined8 *)(unaff_x29 + -0x10);
            if (*(int *)(*(long *)PTR_DAT_091a1bb0 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            plVar6 = (long *)FUN_071ac668(uVar9,uVar5,1,0);
          }
        }
        else {
          uVar9 = FUN_071773e4(*(undefined8 *)(unaff_x29 + -0x10),0);
          puVar1 = PTR_DAT_091ac510;
          *(undefined8 *)(unaff_x29 + -0x18) = uVar9;
          plVar6 = (long *)thunk_FUN_03d2eb70(*(undefined8 *)puVar1,unaff_x29 + -0x18);
        }
      }
      else {
        uVar4 = FUN_07175d68(*(undefined8 *)(unaff_x29 + -0x10),0);
        puVar1 = PTR_DAT_091a0d08;
        *(undefined4 *)(unaff_x29 + -0x18) = uVar4;
        plVar6 = (long *)thunk_FUN_03d2eb70(*(undefined8 *)puVar1,unaff_x29 + -0x18);
      }
    }
    else {
      uVar9 = *(undefined8 *)(unaff_x29 + -0x10);
      if (*(int *)(*(long *)PTR_DAT_091a0d58 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      bVar3 = FUN_070ce95c(uVar9,0);
      uVar9 = *(undefined8 *)puVar2;
      *(byte *)(unaff_x29 + -0x18) = bVar3 & 1;
      plVar6 = (long *)thunk_FUN_03d2eb70(uVar9,unaff_x29 + -0x18);
    }
    lVar7 = **(long **)(unaff_x25 + 0x38);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03d8f26c(lVar7);
    }
    if ((plVar6 != (long *)0x0) && (*plVar6 != *(long *)(lVar7 + 0x40))) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d8e4(plVar6);
    }
    thunk_FUN_03d2f09c(plVar6,lVar7,__src);
    memcpy(__s,__src,__n);
  }
  memcpy(__dest,__s,__n);
  memcpy(*(void **)(unaff_x29 + -0x20),__dest,__n);
  if (*(long *)(unaff_x19 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


