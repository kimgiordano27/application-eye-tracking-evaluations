/*
FUNCTION_NAME: FUN_0340fcc0
ENTRY_POINT: 0340fcc0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_14;telemetry_or_network_hits_3
*/


long FUN_0340fcc0(undefined2 *param_1,int param_2,long param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puVar7;
  
  uVar13 = (ulong)param_4;
  iVar1 = param_5 + param_4;
  uVar18 = (long)(param_5 + -1) * (long)param_2;
  plVar15 = (long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
  lVar5 = param_3;
  while( true ) {
    if ((DAT_048326ec & 1) == 0) {
      thunk_FUN_01efb3a4(
                        Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                        );
      thunk_FUN_01efb3a4(plVar15);
      DAT_048326ec = 1;
    }
    if (lVar5 == 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
      uVar17 = thunk_FUN_01f117cc();
      uVar8 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                                );
      FUN_034efd20(uVar17,uVar8,0);
      goto LAB_03410040;
    }
    if ((int)param_4 < 0) break;
    if (param_5 < 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar17 = thunk_FUN_01f117cc();
      uVar8 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__);
      puVar7 = Method_OVRTriangleMesh_IOVRAnchorComponent<OVRTriangleMesh>_SetEnabledAsync__;
      goto LAB_03410028;
    }
    uVar10 = (uint)*(undefined8 *)(lVar5 + 0x18);
    if ((int)(uVar10 - param_5) < (int)param_4) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar17 = thunk_FUN_01f117cc();
      uVar8 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_0__);
      puVar7 = Method_System_Runtime_Remoting_Messaging_ObjRefSurrogate_SetObjectData__;
      goto LAB_03410028;
    }
    if (param_5 < 2) {
      if (param_5 != 0) {
        if (uVar10 <= param_4) {
LAB_0340ff40:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar5 = *(long *)(param_3 + uVar13 * 8 + 0x20);
        if (lVar5 != 0) {
          return lVar5;
        }
      }
      return **(long **)(*plVar15 + 0xb8);
    }
    if (0x7fffffff < (long)uVar18) {
LAB_0340ff44:
      thunk_FUN_01efb3a4(
                        Method_System_Linq_Enumerable_Select<RenamedFromAttribute,_ValueTuple<Enum,_string>>__
                        );
      uVar17 = thunk_FUN_01f117cc();
      FUN_0358cabc(uVar17,0);
      goto LAB_03410040;
    }
    uVar19 = uVar18;
    if ((int)param_4 < iVar1) {
      plVar11 = (long *)(lVar5 + (-(ulong)(param_4 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3) +
                                 0x20);
      lVar4 = (long)iVar1 - (long)(int)param_4;
      uVar12 = uVar13;
      do {
        if (uVar10 <= (uint)uVar12) goto LAB_0340ff40;
        if ((*plVar11 != 0) &&
           (uVar2 = *(int *)(*plVar11 + 0x10) + (int)uVar19, uVar19 = (ulong)uVar2, (int)uVar2 < 0))
        goto LAB_0340ff44;
        plVar11 = plVar11 + 1;
        lVar4 = lVar4 + -1;
        uVar12 = (ulong)((uint)uVar12 + 1);
      } while (lVar4 != 0);
      lVar4 = thunk_FUN_01ecbcb8(uVar19 & 0xffffffff);
      iVar16 = 0;
      if ((int)param_4 < iVar1) {
        lVar14 = (long)(int)param_4;
        do {
          if (*(uint *)(lVar5 + 0x18) <= (uint)lVar14) goto LAB_0340ff40;
          lVar9 = *(long *)(lVar5 + 0x20 + lVar14 * 8);
          if (lVar9 != 0) {
            iVar3 = *(int *)(lVar9 + 0x10);
            if ((int)uVar19 - iVar16 < iVar3) {
              iVar16 = -1;
              plVar15 = (long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
              break;
            }
            FUN_0340e994(lVar4,iVar16);
            iVar16 = iVar3 + iVar16;
          }
          if (lVar14 < iVar1 + -1) {
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (param_2 == 1) {
              *(undefined2 *)(lVar4 + 0x14 + (long)iVar16 * 2) = *param_1;
            }
            else {
              FUN_03596d94(lVar4 + 0x14 + (long)iVar16 * 2,param_1,param_2 << 1,0);
            }
            iVar16 = iVar16 + param_2;
          }
          lVar14 = lVar14 + 1;
          plVar15 = (long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
        } while (iVar1 != lVar14);
      }
    }
    else {
      lVar4 = thunk_FUN_01ecbcb8(uVar18 & 0xffffffff);
      iVar16 = 0;
    }
    if (iVar16 == (int)uVar19) {
      return lVar4;
    }
    lVar4 = FUN_0358d9a0(lVar5,0);
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      uVar17 = *(undefined8 *)
                Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__;
      lVar5 = thunk_FUN_01f116d0(lVar4,uVar17);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar4,uVar17);
      }
    }
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar17 = thunk_FUN_01f117cc();
  uVar8 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_0__);
  puVar7 = Method_System_Runtime_Remoting_Messaging_ObjRefSurrogate_GetObjectData__;
LAB_03410028:
  uVar6 = thunk_FUN_01efb3a4(puVar7);
  FUN_034f3578(uVar17,uVar8,uVar6,0);
LAB_03410040:
  uVar8 = thunk_FUN_01efb3a4(Method_UnityEngine_Object_FindObjectOfType<AppVoiceExperience>__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar17,uVar8);
}


