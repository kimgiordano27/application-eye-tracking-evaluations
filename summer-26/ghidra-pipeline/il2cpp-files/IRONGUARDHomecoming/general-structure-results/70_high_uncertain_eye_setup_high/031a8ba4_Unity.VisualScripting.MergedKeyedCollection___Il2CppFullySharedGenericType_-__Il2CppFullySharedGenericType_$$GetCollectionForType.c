/*
FUNCTION_NAME: Unity.VisualScripting.MergedKeyedCollection<__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType>$$GetCollectionForType
ENTRY_POINT: 031a8ba4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x031a8c88) */
/* WARNING: Removing unreachable block (ram,0x031a8c84) */
/* WARNING: Removing unreachable block (ram,0x031a8cc8) */

void Unity_VisualScripting_MergedKeyedCollection<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__GetCollectionForType
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong in_x9;
  int *in_x10;
  int *piVar4;
  long in_x11;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_031a8b10;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_01ecb238();
LAB_031a8b10:
        (*(code *)*puVar1)();
        FUN_031a85f8();
        lVar2 = *unaff_x23;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *unaff_x24) {
                    /* try { // try from 031a8b54 to 032a8b5f has its CatchHandler @ 031a8c30 */
              puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_031a8b5c;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar1 = (undefined8 *)FUN_01ecb238();
LAB_031a8b5c:
                    /* try { // try from 031a8b60 to 032a8c1f has its CatchHandler @ 031a879c */
        uVar3 = (*(code *)*puVar1)();
        if ((uVar3 & 1) == 0) {
          if (unaff_x23 == (long *)0x0) goto LAB_031a8c78;
          lVar2 = *unaff_x23;
                    /* try { // try from 031a8c20 to 032a8c23 has its CatchHandler @ 031a8c2c */
                    /* try { // try from 031a8c24 to 032a8c4f has its CatchHandler @ 031a879c */
          uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031a8c20 with catch @ 031a8c2c
                        */
          if (uVar3 == 0) goto LAB_031a8c50;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031a8b54 with catch @ 031a8c30
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031a8a9c with catch @ 031a8c34
                        */
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          goto LAB_031a8c38;
        }
        param_3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
        if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
          param_3 = FUN_01ecaf44(param_3);
        }
        param_1 = *unaff_x23;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_031a8c38:
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031a8adc with catch @ 031a8c38
                        */
    if (*(long *)(piVar4 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    /* catch() { ... } // from try @ 031a8c50 with catch @ 031a8c68 */
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_031a8c6c;
    }
  }
LAB_031a8c50:
                    /* try { // try from 031a8c50 to 032a8c53 has its CatchHandler @ 031a8c68 */
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_031a8c6c:
  (*(code *)*puVar1)();
LAB_031a8c78:
                    /* try { // try from 031a8ca8 to 032a8ccf has its CatchHandler @ 031a8ce4 */
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


