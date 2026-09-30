/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$get_Current
ENTRY_POINT: 02ea2138
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02ea2510) */
/* WARNING: Removing unreachable block (ram,0x02ea247c) */
/* WARNING: Removing unreachable block (ram,0x02ea248c) */
/* WARNING: Removing unreachable block (ram,0x02ea2494) */
/* WARNING: Removing unreachable block (ram,0x02ea24bc) */
/* WARNING: Removing unreachable block (ram,0x02ea24a0) */
/* WARNING: Removing unreachable block (ram,0x02ea24ac) */
/* WARNING: Removing unreachable block (ram,0x02ea24cc) */

void System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__get_Current
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong in_x9;
  long in_x10;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long lVar10;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  
  do {
    piVar9 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar9 + -2) == param_3) {
        puVar4 = (undefined8 *)(param_1 + (long)(*piVar9 + 4) * 0x10 + 0x138);
        goto LAB_02ea2174;
      }
      in_x9 = in_x9 - 1;
      piVar9 = piVar9 + 4;
    } while (in_x9 != 0);
    do {
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02ea2174:
      uVar5 = (*(code *)*puVar4)();
      if ((uVar5 & 1) == 0) {
        lVar8 = *unaff_x19;
        uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar5 == 0)
        goto 
        System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_Reset
        ;
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_02ea21f8;
      }
      iVar1 = *(int *)(unaff_x29 + -0x34) + 1;
      *(int *)(unaff_x29 + -0x34) = iVar1;
      if (*(long *)(unaff_x29 + -0x30) <= (long)iVar1) goto LAB_02ea2410;
      lVar8 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 0x10) * 0x10 + 0x138);
            goto LAB_02ea2060;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02ea2060:
      cVar2 = (*(code *)*puVar4)();
      if (cVar2 == '\r') {
        lVar8 = *unaff_x19;
        uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar5 == 0) goto LAB_02ea21d0;
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_02ea21b8;
      }
      lVar10 = *unaff_x21;
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44();
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44();
      }
      plVar7 = (long *)**(long **)(lVar8 + 0xb8);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *plVar7;
      *(long **)(unaff_x29 + -0x20) = unaff_x19;
      *(undefined8 **)(unaff_x29 + -0x18) = unaff_x22;
      lVar8 = *(long *)(lVar8 + 0x1a0);
      (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar7,unaff_x29 + -0x20);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      puVar4 = unaff_x22;
      if (-1 < *(int *)(*(long *)(lVar8 + 0x58) + 0x28)) {
        puVar4 = (undefined8 *)*unaff_x22;
      }
      puVar6 = *(undefined8 **)(lVar8 + 0x60);
      uVar3 = *puVar6;
      *(undefined8 **)(unaff_x29 + -0x20) = puVar4;
      (*(code *)puVar6[2])(uVar3,puVar6,lVar10,unaff_x29 + -0x20,unaff_x29 + -0xc);
      param_1 = *unaff_x19;
      param_3 = *unaff_x26;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar9 = piVar9 + 4;
    if (uVar5 == 0) break;
LAB_02ea21f8:
    if (*(long *)(piVar9 + -2) == *unaff_x26) {
      puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 8) * 0x10 + 0x138);
      goto FUN_02ea2360;
    }
  }

  System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_Reset
  :
  puVar4 = (undefined8 *)FUN_01ecb238();
FUN_02ea2360:
  lVar8 = (*(code *)*puVar4)();
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar8 = FUN_0390b368(lVar8,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar8 = FUN_0390b70c(lVar8,0);
  lVar10 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x26) {
        puVar4 = (undefined8 *)(lVar10 + (long)(*piVar9 + 10) * 0x10 + 0x138);
        goto LAB_02ea23d8;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02ea23d8:
  uVar3 = (*(code *)*puVar4)();
  uVar3 = FUN_03405678(*(undefined8 *)
                        Method_Oculus_Platform_Samples_SimplePlatformSample_DataEntry_leaderboardGetCallback__
                       ,uVar3,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar3,uVar3);
  }
  FUN_0390b840(lVar8,uVar3,0);
  goto LAB_02ea2410;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar9 = piVar9 + 4;
    if (uVar5 == 0) break;
LAB_02ea21b8:
    if (*(long *)(piVar9 + -2) == *unaff_x26) {
      puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 8) * 0x10 + 0x138);
      goto LAB_02ea2230;
    }
  }
LAB_02ea21d0:
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02ea2230:
  lVar8 = (*(code *)*puVar4)();
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar8 = FUN_0390b368(lVar8,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar8 = FUN_0390b70c(lVar8,0);
  lVar10 = FUN_01f08890(*(undefined8 *)
                         Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                        ,5);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar10 + 0x20) =
       *(undefined8 *)
        Method_Oculus_Platform_Samples_SimplePlatformSample_DataEntry_getEntitlementCallback__;
  thunk_FUN_01f51358();
  uVar3 = FUN_035683d0(unaff_x29 + -0x34,0);
  if (*(uint *)(lVar10 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar10 + 0x28) = uVar3;
  thunk_FUN_01f51358();
  if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar10 + 0x30) =
       *(undefined8 *)
        Method_Oculus_Platform_Samples_SimplePlatformSample_DataEntry_getFriendsCallback__;
  thunk_FUN_01f51358();
  uVar3 = FUN_0356965c(unaff_x29 + -0x30,0);
  if (*(uint *)(lVar10 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar10 + 0x38) = uVar3;
  thunk_FUN_01f51358();
  if (*(uint *)(lVar10 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar10 + 0x40) =
       *(undefined8 *)
        Method_Oculus_Platform_Samples_SimplePlatformSample_DataEntry_getUserCallback__;
  thunk_FUN_01f51358();
  uVar3 = FUN_0340efe8(lVar10,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar3,uVar3);
  }
  FUN_0390b840(lVar8,uVar3,0);
LAB_02ea2410:
  lVar8 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x26) {
        puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
        goto LAB_02ea2468;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02ea2468:
  (*(code *)*puVar4)();
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


